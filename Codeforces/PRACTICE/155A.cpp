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

	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	int be = a[0];
	int wo = a[0];
	int ans = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] > be) {
			be = a[i];
			ans++;
		}
		if (a[i] < wo) {
			wo = a[i];
			ans++;
		}
	}

	cout << ans;

	return 0;
}