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
		int n; cin >> n;
		int a[n];
		int up1 = 0, up2 = 0, dn1 = 0, dn2 = 0;
		int t1, t2;

		for (int i = 0; i < n; i++) {
			t1 = up1 + dn1;
			t2 = up2 + dn2;
			cin >> a[i];
			if (a[i] == 1) {
				if (up1 == up2 or up1 > up2) {
					up1++;
				} else {
					up2++;
				}
			} else if (a[i] == 2) {
				if (t1 > t2 or t1 == t2) {
					t2++;
				} else {
					t1++;
				}
			} else {
				if (up1 + up2 >= dn1 + dn2) {
					if (up1 > up2) {
						up1++;
					} else {
						up2++;
					}
				} else {
					if (dn1 > dn2) {
						dn2++;
					} else {
						dn1++;
					}
				}
			}
		}
		cout << up1 + up2 << endl;
	}

	return 0;
}