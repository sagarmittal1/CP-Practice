#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	int a[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int ans = 0;

	for (int i = 1; i < n + 1; i++) {
		for (int j = i + 1; j < n + 1; j++) {
			if (abs(a[j] - a[i]) == (i * i) + (j * j)) {
				ans++;
			}
		}
	}

	cout << ans;

	return 0;
}