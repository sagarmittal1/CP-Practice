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
	int x[n], y[n];

	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		bool c1 = false, c2 = false, c3 = false, c4 = false;

		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] and y[i] == y[j]) {
				c1 = true;
				break;
			}
		}

		for (int j = 0; j < n; j++) {
			if (x[i] > x[j] and y[i] == y[j]) {
				c2 = true;
				break;
			}
		}

		for (int j = 0; j < n; j++) {
			if (x[i] == x[j] and y[i] < y[j]) {
				c3 = true;
				break;
			}
		}

		for (int j = 0; j < n; j++) {
			if (x[i] == x[j] and y[i] > y[j]) {
				c4 = true;
				break;
			}
		}

		if (c1 && c2 && c3 && c4) {
			ans++;
		}
	}

	cout << ans;

	return 0;
}