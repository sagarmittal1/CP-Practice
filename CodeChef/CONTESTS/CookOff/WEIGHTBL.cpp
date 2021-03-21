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

	int t; cin >> t;

	while (t--) {
		int w1, w2, x1, x2, m;
		cin >> w1 >> w2 >> x1 >> x2 >> m;
		int chef = w2 - w1;
		int k1 = x1 * m;
		int k2 = x2 * m;

		if (chef >= k1 and chef <= k2) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}

	return 0;
}