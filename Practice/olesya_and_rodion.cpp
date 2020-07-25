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
    int n, t;
    cin >> n >> t;
    if (t == 10)
    {
        if (n == 1)
            cout << -1;
        else
        {
            for (int i = 1; i < n; i++)
            {
                cout << 1;
            }
            cout << 0;
        }
    }
    else
        for (int i = 1; i <= n; i++)
        {
            cout << t;
        }
}