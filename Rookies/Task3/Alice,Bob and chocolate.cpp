#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> X(n);
    for (int i = 0; i < n; i++)
        cin >> X[i];
    int ac = 0, bc = 0, a = 0, b = n - 1, sumA = X[a], sumB = X[b];
    while (a <= b)
    {
        if (sumA <= sumB)
        {
            sumA += X[++a];
            ac++;
        }
        else
        {
            sumB += X[--b];
            bc++;
        }
    }
    cout << ac << " " << bc;
    return 0;
}