#include <bits/stdc++.h>
using namespace std;
const int X[] = {-1, 1, 0, 0};
const int Y[] = {0, 0, -1, 1};
const char dir[] = {'U', 'D', 'L', 'R'};
int n, m;
vector<string> MAZE;
vector<vector<bool>> v;
vector<vector<int>> dist;
vector<vector<int>> dir2;
bool is_Valid(int x, int y)
{
    return x >= 0 && x < n && y >= 0 && y < m && !v[x][y] && MAZE[x][y] != '#';
}
void bfs(int X1, int Y1)
{
    queue<pair<int, int>> q;
    q.push({X1, Y1});
    v[X1][Y1] = true;
    dist[X1][Y1] = 0;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = x + X[i], ny = y + Y[i];
            if (is_Valid(nx, ny))
            {
                v[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                dir2[nx][ny] = i;
                q.push({nx, ny});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    MAZE.resize(n);
    v.assign(n, vector<bool>(m, false));
    dist.assign(n, vector<int>(m, -1));
    dir2.assign(n, vector<int>(m, -1));
    int X1, Y1, X2, Y2;
    for (int i = 0; i < n; ++i)
    {
        cin >> MAZE[i];
        for (int j = 0; j < m; ++j)
        {
            if (MAZE[i][j] == 'A')
            {
                X1 = i;
                Y1 = j;
            }
            else if (MAZE[i][j] == 'B')
            {
                X2 = i;
                Y2 = j;
            }
        }
    }
    bfs(X1, Y1);
    if (dist[X2][Y2] == -1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << dist[X2][Y2] << endl;
        string path;
        int x = X2, y = Y2;
        while (x != X1 || y != Y1)
        {
            int p = dir2[x][y];
            path += dir[p];
            x -= X[p];
            y -= Y[p];
        }
        reverse(path.begin(), path.end());
        cout << path << endl;
    }
    return 0;
}