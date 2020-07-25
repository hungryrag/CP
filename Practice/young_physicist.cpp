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
    int n;
    cin >> n;
    int a[3] = {0}, x, y, z;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        a[0] += x, a[1] += y, a[2] += z;
    }
    if (a[0] == 0 & a[1] == 0 && a[2] == 0)
        cout << "YES";
    else
        cout << "NO";
}