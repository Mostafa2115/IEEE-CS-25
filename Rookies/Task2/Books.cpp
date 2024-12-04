#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    long long t;
    cin >> n >> t;
    vector<long> a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    // sort(a.begin(), a.end());
    long x = 0, sum = 0, y = 0;
    for (long i = 0; i < n; i++)
    {
        sum += a[i];
        while (sum > t)
        {
            sum -= a[y];
            y++;
        }
        x = max(x, i - y + 1);
    }
    cout << x;
    return 0;
}