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
	int n;
	cin >> n;
	int a[n ];
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}

	int x, y, z;
	for (int i = 1; i < n; ++i)
	{
		x = a[i]; y = a[x]; z = a[y];

		if (i == z)
		{	cout << "YES";
			exit(0);
		}
	}
	cout << "NO";
}
