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
    cin >> t;
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
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int grain_l = a - b, grain_h = a + b, tot_l = c - d, tot_h = c + d, x = grain_l;

    if (n * grain_h < tot_l || n * grain_l > tot_h)
        cout << "NO";
    else
        cout << "YES";
}