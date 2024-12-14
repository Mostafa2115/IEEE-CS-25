#include <bits/stdc++.h>
using namespace std;
const int n = 8;
vector<string> a(n);
int x = 0;
bool isSafe(int r, int c, vector<int> &q)
{

    for (int i = 0; i < r; i++)
    {

        if (q[i] == c || abs(q[i] - c) == abs(i - r))
        {
            return false;
        }
    }
    return true;
}
void solve(int r, vector<int> &q)
{
    if (r == n)
    {
        x++;
        return;
    }
    for (int c = 0; c < n; c++)
    {
        if (a[r][c] == '*')
            continue;

        if (isSafe(r, c, q))
        {
            q[r] = c;
            solve(r + 1, q);
            q[r] = -1;
        }
    }
}
int main()
{

    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> q(n, -1);
    solve(0, q);
    cout << x << endl;
    return 0;
}