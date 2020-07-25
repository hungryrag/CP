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
    /*is Single Test case?*/ cin >> t;
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
    int n, flag = 0, c = 0, b = 0;
    cin >> n;
    string str;
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '(')
            flag = 1;
        if (flag)
        {
            if (str[i] == '(')
                b++;
            else if (str[i] == ')')
                b--;

            if (b == 0)
                flag = 0;
        }
    }
    cout << b;
}