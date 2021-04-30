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
		int l; cin >> l;
		string s; cin >> s;
		int n0 = 0, n1 = 0;

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '0') {
				n0++;
			} else {
				n1++;
			}
		}
		// cout << n0 << " " << n1;

		if (n1 >= n0) {
			cout << "YES" << endl;
		} else {
			int x0 = 0, x1 = 0;
			string ans = "NO";

			for (int i = 0; i < l; i++) {
				if (s[i] == '0') {
					x0++;
				} else {
					x1++;
				}

				if (x1 >= x0) {
					ans = "YES";
					break;
				}
			}

			cout << ans << endl;
		}
	}

	return 0;
}