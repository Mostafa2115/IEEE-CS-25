#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    string s;
    cin >> s;
    vector<long long> a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    long long y = LONG_LONG_MAX, x;
    bool z = false;
    for (long i = 0; i < s.size(); i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'L')
        {
            z = true;
            x = (a[i + 1] - a[i]) / 2;
            if (x < y)
                y = x;
        }
    }
    if (z)
        cout << y;
    else
        cout << -1;
    return 0;
}
