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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    sort(a, a + 3, greater<int>());
    if (a[0] == a[1] && a[1] == a[2])
    {
        cout << "YES\n";
        cout << a[0] << " " << a[1] << " " << a[2];
    }
    else if (a[0] == a[1])
    {
        cout << "YES\n";
        cout << a[1] << " " << a[2] << " " << a[2];
    }
    else
        cout << "NO";
}