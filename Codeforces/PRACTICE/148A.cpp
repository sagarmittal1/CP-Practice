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

	int k, l, m, n;
	cin >> k >> l >> m >> n;
	int d; cin >> d;
	int ans = 0;

	for (int i = 1; i <= d; i++) {
		if (i % k == 0 or i % l == 0 or i % m == 0 or i % n == 0) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}