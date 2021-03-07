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

	int t, h, x;
	cin >> t >> h >> x;
	string ans = "NO";

	while (t--) {
		int i; cin >> i;
		if (i + x >= h) {
			ans = "YES";
			break;
		}
	}
	cout << ans;

	return 0;
}