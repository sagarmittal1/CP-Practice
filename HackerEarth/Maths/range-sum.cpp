// using prefix sum solved this problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		long n; cin >> n;
		long long arr[n];
		long long dp[n];

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
		}

		dp[0] = 0;

		for (int i = 1; i <= n; i++) {
			dp[i] = dp[i - 1] + arr[i];
		}

		long long q; cin >> q;
		while (q--) {
			int l, r;
			cin >> l >> r;
			cout << dp[r] - dp[l - 1] << "\n";
		}
	}

	return 0;
}