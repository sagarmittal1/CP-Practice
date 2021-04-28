#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n, k;
	cin >> n >> k;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int z = 0;
		int x; cin >> x;
		string s = to_string(x);

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '4' or s[i] == '7') {
				z++;
			}
		}

		if (z <= k) ans++;
	}

	cout << ans;

	return 0;
}