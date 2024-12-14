#include <bits/stdc++.h>
using namespace std;
long long Apple(int i, long long sum1, long long sum2, const vector<int> &X)
{
    if (i == X.size())
        return abs(sum1 - sum2);
    long long a = Apple(i + 1, sum1 + X[i], sum2, X);
    long long b = Apple(i + 1, sum1, sum2 + X[i], X);
    return min(a, b);
}
int main()
{
    int n;
    cin >> n;
    vector<int> X(n);
    for (int i = 0; i < n; ++i)
        cin >> X[i];
    cout << Apple(0, 0, 0, X) << endl;
    return 0;
}