#include <bits/stdc++.h>
using namespace std;
const int X[] = {-1, 1, 0, 0};
const int Y[] = {0, 0, -1, 1};
const int Max_N = 1000;
const int Max_M = 1000;
int A[Max_N][Max_M];
bool B[Max_N][Max_M];
int dfs(int x, int y, int n, int m)
{
    B[x][y] = true;
    int v = A[x][y];
    for (int d = 0; d < 4; d++)
    {
        int nX = x + X[d];
        int nY = y + Y[d];
        if (nX >= 0 && nX < n && nY >= 0 && nY < m && !B[nX][nY] && A[nX][nY] > 0)
            v += dfs(nX, nY, n, m);
    }
    return v;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> A[i][j];
        memset(B, false, sizeof(B));
        int maxV = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (A[i][j] > 0 && !B[i][j])
                    maxV = max(maxV, dfs(i, j, n, m));
        cout << maxV << endl;
    }
    return 0;
}