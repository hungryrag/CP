#include <bits/stdc++.h>

using namespace std;

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m] = {0};

    int i = 0, j = 0, turn = 0;
    while (i < n && j < m)
    {
        if (a[i][j] == 0)
        {
            turn++;
            i++;
            j++;
        }
    }
    if (turn % 2)
        cout << "Akshat";
    else
    {
        cout << "Malvika";
    }
}