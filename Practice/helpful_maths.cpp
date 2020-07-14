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
	string s;
	cin >> s;
	int n = s.length();
	sort(s.begin(), s.end());
	//char res[n];

	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '+')
			continue;
		else
		{
			cout << s[i];
			if (s[i + 1] != '\0')
				cout << "+";
		}

	}
}
