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
    long long int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;

    if (b >= a)
        cout << b;
    else
    {
        if (c <= d)
        {
            cout << -1;
            return;
        }
        count = ceil(double(a - b) / (c - d));
        cout << (b + count * c);
    }
}
