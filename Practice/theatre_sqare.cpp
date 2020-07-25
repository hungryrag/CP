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
    int n, m, a;
    cin >> n >> m >> a;

    unsigned long long int row, col;
    if (n > a)
        row = ceil(double(n) / a);
    else
        row = 1;
    if (m > a)
        col = ceil(double(m) / a);
    else
        col = 1;

    // unsigned long long int ans = row * col;
    cout << row * col;
}