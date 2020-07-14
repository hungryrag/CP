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
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> a[i];
	}
	int c = 1, count = 1;
	for (int i = 1; i < n; ++i)
	{
		/* code */
		if (a[i] >= a[i - 1])
			c++;
		else
			c = 1;
		if (c > count)
			count = c;
	}
	cout << count;
}
