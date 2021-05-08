#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int b[n];

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			b[i] = a[i];
		} else {
			b[i] = b[i - 1] + a[i];
		}
	}

	// for (int i = 0; i < n; i++) {
	// 	cout << b[i] << " ";
	// }


	int q; cin >> q;

	while (q--) {
		int i, j;
		cin >> i >> j;

		if (i == 0) {
			cout << b[j] << endl;
		} else {
			cout << b[j] - b[i - 1] << endl;
		}
	}

	return 0;
}