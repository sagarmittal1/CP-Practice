#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int x = a[0];
	int ans = 1;

	for (int i = 0; i < n; i++) {
		if (x != a[i]) {
			x = a[i];
			ans++;
		}
	}
	cout << ans;

	return 0;
}