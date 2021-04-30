#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int t; cin >> t;

	while (t--) {
		int n, w, wr;
		cin >> n >> w >> wr;

		int k[n];

		for (int i = 0; i < n; i++) {
			cin >> k[i];
		}
		sort(k, k + n);

		string ans = "NO";

		if (wr >= w) {
			ans = "YES";
		}

		int total = n;

		if (n % 2 != 0) {
			total--;
		}

		if (total + wr >= w) {
			ans = "YES";
		}

		cout << ans << endl;
	}

	return 0;
}