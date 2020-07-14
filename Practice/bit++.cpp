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
	int n, inc, dec, x = 0;
	cin >> n;
	string str;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		inc = 0; dec = 0;
		for (int i = 0; i < str.length(); ++i)
		{
			if (str[i] == '+')
				inc++;
			else if (str[i] == '-')
				dec++;
		}
		// cout << inc << endl;
		// cout << dec << endl;
		if (inc == 2)
			x++;
		else if (dec == 2)
			x--;
	}
	cout << x;
}
