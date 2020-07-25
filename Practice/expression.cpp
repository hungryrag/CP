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
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int b[4];
    b[0] = a[0] + a[1] + a[2];
    b[1] = (a[0] + a[1]) * a[2];
    b[2] = a[0] * (a[1] + a[2]);
    b[3] = a[0] * a[1] * a[2];
    sort(b, b + 4, greater<int>());
    cout << b[0];
}