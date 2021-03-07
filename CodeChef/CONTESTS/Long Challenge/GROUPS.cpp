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
		string s; cin >> s;
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {
			if (i == 0) {
				if (s[i] == '1') {
					ans++;
				}
			}
			if (s[i] == '1' and s[i - 1] == '0') {
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}