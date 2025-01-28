#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> c;
vector<vector<int>> t;
int sum = 0;
void dfs(int n, int p, int z)
{
    if (c[n] == 1)
        z++;
    else
        z = 0;
    if (z > m)
        return;
    bool isLeaf = true;
    for (int i : t[n])
        if (i != p)
        {
            isLeaf = false;
            dfs(i, n, z);
        }
    if (isLeaf)
        sum++;
}
int main()
{
    cin >> n >> m;
    c.resize(n + 1);
    t.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        t[x].push_back(y);
        t[y].push_back(x);
    }
    dfs(1, -1, 0);
    cout << sum << endl;
    return 0;
}