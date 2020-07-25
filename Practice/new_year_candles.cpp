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
    int a, b;
    cin >> a >> b;

    int cur_a = a, cur_b = 0, count = 0;
    while (cur_a > 0)
    {
        count += cur_a;
        cur_b += cur_a;
        cur_a = cur_b / b;
        cur_b = cur_b % b;
    }
    cout << count;
}