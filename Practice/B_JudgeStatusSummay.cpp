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
    int n, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        if (str == "AC")
            c1++;
        else if (str == "WA")
            c2++;
        else if (str == "TLE")
            c3++;
        else if (str == "RE")
            c4++;
    }
    cout << "AC" << " x " << c1 << endl;
    cout << "WA" << " x " << c2 << endl;
    cout << "TLE" << " x " << c3 << endl;
    cout << "RE" << " x " << c4 << endl;
}
