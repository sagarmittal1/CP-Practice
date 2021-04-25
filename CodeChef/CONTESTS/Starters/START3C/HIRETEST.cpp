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
		int n, m;
		cin >> n >> m;
		int x, y;
		cin >> x >> y;

		while (n--) {
			string s; cin >> s;
			int f = 0, p = 0;

			for (int i = 0; i < s.size(); i++) {
				if (s[i] == 'F') {
					f++;
				} else if (s[i] == 'P') {
					p++;
				} else {
					continue;
				}
			}

			if ((f >= x) or ((f >= (x - 1)) and p >= y) ) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << endl;
	}

	return 0;
}