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
	int a[n];
	int c0 = 0, c5 = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			c0++;
		} else {
			c5++;
		}
	}

	if (c0 == 0) {
		cout << "-1" << endl;
	} else if (c5 == 0) {
		cout << "0" << endl;
	} else {
		if (floor(c5 / 9) >= 1) {
			for (int i = 0; i < 9 * floor(c5 / 9); i++) {
				cout << "5";
			}
			for (int i = 0; i < c0; i++) {
				cout << "0";
			}
		} else {
			cout << "0" << endl;
		}
	}

	return 0;
}