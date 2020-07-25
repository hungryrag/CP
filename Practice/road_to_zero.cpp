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
    long long int x, y, a, b;
    cin >> x >> y >> a >> b;
    long long int cost = 0;
    long long int cost2 = (x + y) * a;
    if (x > 0 && y > 0)
    {
        int diff = 0;
        if (x > y)
        {
            diff = x - y;
            x -= diff;
        }
        else
        {
            diff = y - x;
            y -= diff;
        }
        cost = diff * a + b * x;
    }
    else
    {
        cost = (abs(x) + abs(y)) * a;
    }

    cout << (cost < cost2 ? cost : cost2);
}