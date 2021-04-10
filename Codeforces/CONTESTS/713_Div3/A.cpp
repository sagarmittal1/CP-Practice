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
		int x = 0, y = 0;
		int x1 = 0, y1 = 0;
		int x2 = 0, y2 = 0;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (x == 0 or a[i] == x) {
				x = a[i];
				x1++;
				x2 = i + 1;
			} else {
				y = a[i];
				y1++;
				y2 = i + 1;
			}
		}

		if (x1 > y1) {
			cout << y2 << endl;
		} else {
			cout << x2 << endl;
		}
	}

	return 0;
}