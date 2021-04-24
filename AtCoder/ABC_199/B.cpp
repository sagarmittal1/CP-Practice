#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	int a[n], b[n];

	int maxa = 0, minb = 1000;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxa) {
			maxa = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
		if (b[i] < minb) {
			minb = b[i];
		}
	}
	// cout << minb << " " << maxa;

	if (minb - maxa < 0) {
		cout << 0;
	} else {
		cout << (minb - maxa) + 1;
	}

	return 0;
}