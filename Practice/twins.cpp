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
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());
	int count = 0, sum = 0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		sum += arr[i];
		count++;
		if (sum > accumulate(arr + i + 1, arr + n, 0))
			break;
	}
	cout << count;

}
