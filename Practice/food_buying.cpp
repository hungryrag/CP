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
    int s, temp, spend = 0;
    cin >> s;
    while (s >= 10)
    {
        temp = s / 10;
        temp = temp * 10;
        spend += temp;
        s -= temp;
        s += floor(double(temp) / 10);
    }
    spend += s;
    cout << spend;
}