#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (z == -1)
        {
            if (y > 0)
            {
                y--;
            }
            else
            {
                x++;
            }
        }
        else
        {
            y += z;
        }
    }
    cout << x << endl;
    return 0;
}