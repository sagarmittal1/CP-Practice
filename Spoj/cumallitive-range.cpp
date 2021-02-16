// https://www.spoj.com/problems/CSUMQ/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int arr[n];
	int dp[n];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + arr[i];
	}

	int q; cin >> q;
	while (q--) {
		int l, r;
		cin >> l >> r;
		cout << dp[r + 1] - dp[l] << endl;
	}

	return 0;
}