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
	long long int n, k, res;
	cin >> n >> k;

	if ( k <= ceil((long double)n / 2))
	{
		/* code */
		res = 2 * k - 1;
	}
	else
	{
		if (n % 2)
			res = 2 * k - n - 1;
		else
			res = 2 * k - n;
	}
	cout << res;
}
