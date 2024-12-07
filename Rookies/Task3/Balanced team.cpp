#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    long long x = 0, Max = 0;
    for (long long i = 0; i < n; i++)
    {
        while (a[i] - a[x] > 5)
        {
            x++;
        }
        Max = max(Max, i - x + 1);
    }
    cout << Max;
    return 0;
}