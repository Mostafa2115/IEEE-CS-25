#include <bits/stdc++.h>
using namespace std;
const int Max = 1000;
vector<string> Z;
bool v[Max][Max];
int n, m;
int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, -1, 1};
void dfs(int x, int y)
{
    v[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + X[i];
        int ny = y + Y[i];
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !v[nx][ny] && Z[nx][ny] == '.')
        {
            dfs(nx, ny);
        }
    }
}
int main()
{
    cin >> n >> m;
    Z.resize(n);
    for (int i = 0; i < n; i++)
        cin >> Z[i];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Z[i][j] == '.' && !v[i][j])
            {
                c++;
                dfs(i, j);
            }
        }
    }
    cout << c << endl;
    return 0;
}