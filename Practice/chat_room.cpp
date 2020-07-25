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
    string str, res;
    cin >> str;
    int h = str.find('h');
    if (h >= 0)
    {
        int e = str.find('e', h + 1);
        if (e >= 0)
        {
            int l = str.find('l', e + 1);
            if (l >= 0)
            {
                int l1 = str.find('l', l + 1);
                if (l1 >= 0)
                {
                    int o = str.find('o', l1 + 1);
                    if (o >= 0)
                    {
                        cout << "YES";
                        exit(0);
                    }
                }
            }
        }
    }
    cout << "NO";
}