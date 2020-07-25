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
    long long int n, k;
    cin >> n >> k;
    int div = n;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            div = i;
            break;
        }
    }
    n += div;
    while (--k)
    {
        n += 2;
    }
    cout << n;
}