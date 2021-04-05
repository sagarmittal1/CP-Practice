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

	int n, k;
	cin >> n >> k;
	int ans = 0;

	if (n % 2 == 0) {
		if (k <= n / 2) {
			ans = (k * 2) - 1;
		} else {
			k = k - (n / 2);
			ans = (k * 2);
		}
	} else {
		if (k <= (n + 1) / 2) {
			ans = (k * 2) - 1;
		} else {
			k = k - (n / 2);
			ans = ((k - 1) * 2);
		}
	}

	cout << ans;

	return 0;
}