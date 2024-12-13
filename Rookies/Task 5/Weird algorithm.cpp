#include <bits/stdc++.h>
using namespace std;

void algorithm(long long n)
{
    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
    }
    cout << n << endl;
}
int main()
{
    long long n;
    cin >> n;
    algorithm(n);
    return 0;
}