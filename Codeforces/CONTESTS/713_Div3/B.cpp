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
		char a[n][n];
		int x1 = 1000, y1 = 1000;
		int x2 = 1000, y2 = 1000;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				if (a[i][j] == '*') {
					if (x1 == 1000 and y1 == 1000) {
						x1 = i;
						y1 = j;
					} else {
						x2 = i;
						y2 = j;
					}
				}
			}
		}
		int x3, x4, y3, y4;


		if (x1 != x2 and y1 != y2) {
			x3 = x1, y3 = y2;
			x4 = x2, y4 = y1;
		} else if (y1 == y2) {
			if (y1 != n - 1) {
				x3 = x1; y3 = y1 + 1;
				x4 = x2; y4 = y2 + 1;
			} else {
				x3 = x1; y3 = y1 - 1;
				x4 = x2; y4 = y2 - 1;
			}
		} else {
			if (x1 != n - 1) {
				x3 = x1 + 1; y3 = y1;
				x4 = x2 + 1; y4 = y2;
			} else {
				x3 = x1 - 1; y3 = y1;
				x4 = x2 - 1; y4 = y2;
			}
		}


		a[x3][y3] = '*';
		a[x4][y4] = '*';

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}