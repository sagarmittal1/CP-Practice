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
	string s; cin >> s;
	int ans = 0;

	for (int i = 1; i < n; i++) {
		if (i == 0) {
			if (s[i] == s[0]) {
				ans++;
			}
		} else {
			if (s[i] == s[i - 1]) {
				ans++;
			}
		}
	}
	cout << ans;

	return 0;
}