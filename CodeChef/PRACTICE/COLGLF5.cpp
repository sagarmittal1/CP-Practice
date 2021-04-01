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
		int n, m;
		cin >> n >> m;
		int f[n], c[m];

		for (int i = 0; i < n; i++) {
			cin >> f[i];
		}

		for (int i = 0; i < m; i++) {
			cin >> c[i];
		}

		int t = 0;
		int ft = 0, cr = 0;
		int ans = 0;

		while (ft <= n - 1 and cr <= m - 1) {
			if (f[ft] < c[cr]) {
				ft++;
				if (t == 1) {
					t = 0;
					ans++;
				}
			} else {
				cr++;
				if (t == 0) {
					t = 1;
					ans++;
				}
			}
		}

		cout << ans + 1 << endl;


	}

	return 0;
}