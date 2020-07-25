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
    // cin >> t;
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
    int n, m, s = 0;
    cin >> n >> m;

    int min = ceil(float(n) / 2), max = n;
    // for (int i = min; i <= max; i++)
    // {
    //     if (i % m == 0)
    //     {
    //         cout << i;
    //         return;
    //     }
    // }

    int res = ceil(float(min) / m) * m;
    if (res > n)
        cout << -1;
    else
        cout << res;
}