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
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	double ans = (sum * 1.0) / n;
	cout << ans;

	return 0;
}