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
	int x, step = 0;
	cin >> x;
	while (x)
	{
		if (x >= 5)
			x -= 5;
		else if (x >= 4)
			x -= 4;
		else if (x >= 3)
			x -= 3;
		else if (x >= 2)
			x -= 2;
		else
			x -= 1;
		step++;
	}
	cout << step;
}
