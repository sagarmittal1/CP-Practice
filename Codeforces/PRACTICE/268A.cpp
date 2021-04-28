#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	int h[n], g[n];
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> h[i] >> g[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (h[i] == g[j]) {
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}