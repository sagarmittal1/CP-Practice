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

	int n, l;
	cin >> n >> l;
	double ar[n];

	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}
	sort(ar, ar + n);

	double ans = 0;
	ans = max(ans, ar[0]);
	ans = max(ans, l - ar[n - 1]);

	for (int i = 0; i < n - 1; i++) {
		double dis = ar[i + 1] - ar[i];
		dis /= (2.00);
		ans = max(ans, dis);
	}

	cout << fixed << setprecision(9) << ans;

	return 0;
}