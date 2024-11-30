
#include <bits/stdc++.h>
using namespace std;
void swap(char a, char b)
{
    char t = a;
    a = b;
    b = t;
}
long long f(long long x)
{
    long long y;
    y = pow(-1, x) * x;
    return y;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    long T = 1;
    // cin >> T;
    while (T--)
    {
        // cout << fixed << setprecision(12);
        int n;
        bool x = true;
        cin >> n;
        int y;
        if (n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 74 == 0)
            x = true;
        else
        {
            while (n > 0)
            {
                y = n % 10;
                if (y == 4 || y == 7)
                    x = true;
                else
                {
                    x = false;
                    break;
                }
                n = n / 10;
            }
        }
        if (x)
            cout << "YES";
        else
            cout << "NO";
    }
}