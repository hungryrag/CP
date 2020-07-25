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
    string str;
    cin >> str;
    if (str[0] <= 90 && str[1] >= 97)
    {
        cout << str;
    }
    else
    {
        int caps = 1;
        for (int i = 1; i < str.length(); i++)
        {
            if (str[i] >= 97)
            {
                caps = 0;
                break;
            }
        }
        if (caps)
        {
            char ch = str[0];
            transform(str.begin(), str.end(), str.begin(), ::tolower);
            if (ch >= 97)
                str[0] -= 32;
            cout << str;
        }
        else
            cout << str;
    }
}