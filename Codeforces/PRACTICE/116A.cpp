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
	int ans = 0, total = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		total -= a[i];
		total += b[i];
		if (total > ans) {
			ans = total;
		}
	}
	cout << ans;

	return 0;
}