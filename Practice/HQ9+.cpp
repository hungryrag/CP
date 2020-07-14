#include<bits/stdc++.h>

using namespace std;

void solve();
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // is Single Test case?cin>>t;
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
    // cout << str.length();
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            cout << "YES";
            exit(0);
        }
    }
    cout << "NO";
}
