#include <bits/stdc++.h>
using namespace std;
int X[] = {1, 1, -1, -1, 2, -2, 2, -2};
int Y[] = {2, -2, 2, -2, 1, 1, -1, -1};
bool is_Valid(int x, int y)
{
    return x >= 0 && x < 8 && y >= 0 && y < 8;
}
int minKnightMoves(string s, string d)
{
    int sX = s[0] - 'a', sY = s[1] - '1', dX = d[0] - 'a', dY = d[1] - '1';
    if (sX == dX && sY == dY)
        return 0;
    queue<pair<int, int>> q;
    q.push({sX, sY});
    int v[8][8];
    memset(v, 0, sizeof(v));
    v[sX][sY] = 1;
    int m = 0;
    while (!q.empty())
    {
        int size = q.size();
        m++;
        for (int i = 0; i < size; i++)
        {
            auto c = q.front();
            q.pop();
            for (int j = 0; j < 8; j++)
            {
                int X2 = c.first + X[j];
                int Y2 = c.second + Y[j];
                if (X2 == dX && Y2 == dY)
                    return m;
                if (is_Valid(X2, Y2) && !v[X2][Y2])
                {
                    v[X2][Y2] = 1;
                    q.push({X2, Y2});
                }
            }
        }
    }
    return -1;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, d;
        cin >> s >> d;
        cout << minKnightMoves(s, d) << endl;
    }
    return 0;
}