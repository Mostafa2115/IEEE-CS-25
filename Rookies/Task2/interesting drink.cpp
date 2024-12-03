#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    vector<long> a(n);
    for (long i = 0; i < n; i++)
        cin >> a[i];
    long q, x;
    sort(a.begin(), a.end());
    cin >> q;
    long long m;
    while (q--)
    {
        cin >> m;
        x = upper_bound(a.begin(), a.end(), m) - a.begin();
        cout << x << endl;
    }
    return 0;
}