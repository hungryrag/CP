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
    char ch;
    cin >> ch;
    string s, str = "qwertyuiopasdfghjkl;zxcvbnm,./", res;
    cin >> s;

    if (ch == 'L')
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = str.find(s[i]);
            res.push_back(str[idx + 1]);
        }
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = str.find(s[i]);
            res.push_back(str[idx - 1]);
        }
    }
    cout << res;
}