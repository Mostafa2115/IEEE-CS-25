#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), x(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        int x = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        if (x == 0)
            y = max(y, abs(a[i] - b[x]));
        else if (x == m)
            y = max(y, abs(a[i] - b[x - 1]));
        else
            y = max({y, min(abs(a[i] - b[x]), abs(a[i] - b[x - 1]))});
    }
    cout << y << endl;
    return 0;
}