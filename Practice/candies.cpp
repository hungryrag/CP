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
    long long int n, x;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        int a = pow(2, i);
        //cout << a;
        if (n % (a - 1) == 0)
        {
            x = n / (a - 1);
            cout << x;
            break;
        }
    }
}