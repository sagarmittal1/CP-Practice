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
	int ans = 0;

	while (n--) {
		int p, q;
		cin >> p >> q;
		if (q - p >= 2) {
			ans++;
		}
	}
	cout << ans;

	return 0;
}