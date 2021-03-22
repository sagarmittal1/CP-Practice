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
	int l[n], r[n];
	int l0 = 0, l1 = 0, r0 = 0, r1 = 0;

	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];

		if (l[i] == 0) {
			l0++;
		} else {
			l1++;
		}

		if (r[i] == 0) {
			r0++;
		} else {
			r1++;
		}
	}

	int ans = min(l0, l1) + min(r0, r1);
	cout << ans;

	return 0;
}