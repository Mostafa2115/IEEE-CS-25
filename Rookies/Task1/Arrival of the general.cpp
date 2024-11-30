

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxI = 0, minI = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[maxI])
        {
            maxI = i;
        }
        if (a[i] <= a[minI])
        {
            minI = i;
        }
    }
    int x = maxI + (n - 1 - minI);
    if (maxI > minI)
    {
        x--;
    }
    cout << x << endl;
    return 0;
}
