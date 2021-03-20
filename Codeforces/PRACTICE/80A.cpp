#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

bool prime(int n ) {
	bool ans = true;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			ans = false;
		}
	}
	return ans;
}


int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int n, m;
	cin >> n >> m;
	string ans = "YES";

	for (int i = 2; i < m; i++) {
		if (m % i == 0) {
			ans = "NO";
			break;
		}
	}

	for (int i = n + 1; i < m; i++) {
		if (prime(i)) {
			ans = "NO";
			break;
		}
	}
	cout << ans;

	return 0;
}