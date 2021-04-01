// very nice problem

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

	int t; cin >> t;

	while (t--) {
		int n, k, d, x;
		cin >> n >> k;

		if (n % k == 0) {
			d = n / k;
			x = k;
		} else {
			d = n / k + 1;
			x = n - (k * (n / k));
		}
		cout << d << " " << x << endl;
	}

	return 0;
}