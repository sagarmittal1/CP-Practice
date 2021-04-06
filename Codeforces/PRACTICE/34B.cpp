#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int n, m;
	cin >> n >> m;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n);
	int ans = 0;

	for (int i = 0; i < m; i++) {
		if (a[i] < 0) {
			ans += abs(a[i]);
		}
	}
	cout << ans;

	return 0;
}