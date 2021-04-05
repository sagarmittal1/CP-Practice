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
	int a[n + 10];

	for (int i = 1; i <= n; i++) cin >> a[i];

	int x, y, gap = 10000;

	for (int i = 2; i <= n; i++) {
		if (abs(a[i] - a[i - 1]) < gap) {
			gap = abs(a[i] - a[i - 1]);
			x = i;
			y = i - 1;
		}
	}
	if (abs(a[n] - a[1]) < gap) {
		x = n;
		y = 1;
	}

	cout << x << " " << y;

	return 0;
}