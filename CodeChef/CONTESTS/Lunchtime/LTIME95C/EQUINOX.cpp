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
		int n, a, b;
		cin >> n >> a >> b;

		int sar = 0, anu = 0;

		while (n--) {
			string s; cin >> s;
			if (s[0] == 'E' or s[0] == 'Q' or s[0] == 'U' or s[0] == 'I' or s[0] == 'N' or s[0] == 'O' or s[0] == 'X'  ) {
				sar += a;
			} else {
				anu += b;
			}
		}
		// cout << sar << " " << anu;
		if (sar > anu) {
			cout << "SARTHAK" << endl;
		} else if (anu > sar) {
			cout << "ANURADHA" << endl;
		} else {
			cout << "DRAW" << endl;
		}
	}

	return 0;
}