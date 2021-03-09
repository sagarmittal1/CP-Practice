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
		int a, b, n;
		cin >> a >> b >> n;

		int sum = max(a, b), ans = 0;
		while (sum <= n) {
			if (a > b) {
				b += a;
				ans++;
			} else {
				a += b;
				ans++;
			}
			sum = max(a, b);
		}
		cout << ans << endl;
	}

	return 0;
}