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

	int n, c;
	cin >> n >> c;
	int a[n];
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		if (a[i + 1] - a[i] > c) {
			ans = 0;
		} else {
			ans++;
		}
	}

	cout << ans + 1;

	return 0;
}