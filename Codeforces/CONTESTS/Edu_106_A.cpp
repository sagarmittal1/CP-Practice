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
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		int w, b;
		cin >> w >> b;

		int white = k1 + k2;
		int black = (2 * n) - white;

		if (white / 2 >= w and black / 2 >= b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}