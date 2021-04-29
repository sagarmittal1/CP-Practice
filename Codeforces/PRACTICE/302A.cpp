#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n, m;
	cin >> n >> m;
	int a[n];
	int pos = 0, neg = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 1) {
			pos++;
		} else {
			neg++;
		}
	}

	while (m--) {
		int l, r;
		cin >> l >> r;

		if ((r - l) % 2 == 0) {
			cout << 0 << endl;
		} else {
			int len = r - l + 1;
			if (pos >= len / 2 and neg >= len / 2) {
				cout << 1 << endl;
			} else {
				cout << 0 << endl;
			}
		}
	}

	return 0;
}