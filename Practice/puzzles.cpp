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
	int n, m;
	cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; ++i)
	{
		/* code */
		cin >> a[i];
	}
	sort(a, a + m);
	int diff = INT_MAX;
	for (int i = 0; i < m; ++i)
	{
		/* code */
		int d = INT_MAX;
		if (i + n <= m)
			d = abs(a[i + n - 1] - a[i]);
		if (d < diff)
			diff = d;
	}
	cout << diff;
}
