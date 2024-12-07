#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long z = 0;
        for (long long i = 0; i < n - 1; i++)
        {
            long long x = lower_bound(a.begin() + i + 1, a.end(), l - a[i]) - a.begin();
            long long y = upper_bound(a.begin() + i + 1, a.end(), r - a[i]) - a.begin() - 1;

            if (x <= y)
            {
                z += (y - x + 1);
            }
        }
        cout << z << endl;
    }
    return 0;
}