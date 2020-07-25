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
    int n;
    int cnt2 = 0, cnt3 = 0;
    cin >> n;

    while (n % 2 == 0)
        n /= 2, cnt2++;
    while (n % 3 == 0)
        n /= 3, cnt3++;

    if (n == 1 && cnt2 <= cnt3)
        cout << cnt3 + (cnt3 - cnt2);
    else
        cout << -1;
}