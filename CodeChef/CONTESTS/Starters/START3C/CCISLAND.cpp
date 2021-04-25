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
		float x, y, xr, yr, d;
		cin >> x >> y >> xr >> yr >> d;

		float k1 = x / xr;
		float k2 = y / yr;

		float total = min(k1, k2);

		if (total >= d) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}