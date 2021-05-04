#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n, h;
	cin >> n >> h;
	int a[n];

	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > h) {
			ans += 2;
		} else {
			ans++;
		}
	}

	cout << ans;

	return 0;
}