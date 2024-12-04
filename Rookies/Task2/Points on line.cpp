#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> x(n);
    for (int i = 0; i < n; i++)
        cin >> x[i];
    long long y = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && x[j] - x[i] <= d)
            j++;
        long long k = j - i - 1;
        if (k >= 2)
            y += (k * (k - 1)) / 2;
    }
    cout << y << endl;
    return 0;
}