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
    long int n, x;
    cin >> n;
    if (n > 0)
        cout << n;
    else
    {
        int temp = n % 10;
        x = n / 100;
        x = x * 10 + temp;
        n = n / 10;
        n = (n > x) ? n : x;
        cout << n;
    }
}