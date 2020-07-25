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
    cin >> n;
    int a, res[n] = {0}, flag, k = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a;
        flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (res[j] == a)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            res[k++] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}