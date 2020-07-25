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
    string str;
    int count = 0, i = 0;
    cin >> str;
    while (str.length() > 0 && i < str.length())
    {
        //if (str[i] != str[i + 1])
        if (str.substr(i, 2) == "01" || str.substr(i, 2) == "10")
        {
            str.erase(i, 2);
            count++;
            i = 0;
        }
        else
            i++;
    }

    if (count % 2)
        cout << "DA";
    else
        cout << "NET";
}