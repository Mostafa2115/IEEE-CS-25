// |\        /|  |----------|   |---------   _____________     /\         |---------     /\               -----------    |---------
// | \      / |  |          |   |                  |          /  \        |             /  \                       /     |
// |  \    /  |  |          |   |                  |         /    \       |------      /    \                     /      |--------|
// |   \  /   |  |          |   |--------|         |        /------\      |           /------\                   /                |
// |    \/    |  |          |            |         |       /        \     |          /        \                 /                 |
// |          |  |__________|   _________|         |      /          \    |         /          \   _________   /         _________|
#include <bits/stdc++.h>
#define ll long long
#define NULL __null
#define FASTER                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL), cout.tie(NULL);
using namespace std;
void solve()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string z;
    char c;
    cin >> c;
    cin >> z;
    if (c == 'R')
        for (int i = 0; i < z.size(); i++)
        {
            char ss = z[i];
            for (int j = 0; j < s.size(); j++)
                if (s[j] == ss)
                {
                    cout << s[j - 1];
                    break;
                }
        }
    else if (c == 'L')
    {
        for (int i = 0; i < z.size(); i++)
        {
            char ss = z[i];
            for (int j = 0; j < s.size(); j++)
                if (s[j] == ss)
                {
                    cout << s[j + 1];
                    break;
                }
        }
    }
}
int main()
{
    FASTER;
    long T = 1;
    // cin >> T;
    while (T--)
        solve();
}
