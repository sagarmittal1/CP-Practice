#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n; cin >> n;
	int x[n], y[n];

	for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
		
		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] && y[i] == y[j]) a1 = 1;
			if (x[i] > x[j] && y[i] == y[j]) a2 = 1;
			if (x[i] == x[j] && y[i] < y[j]) a3 = 1;
			if (x[i] == x[j] && y[i] > y[j]) a4 = 1;
		}

		if (a1 == 1 && a2 == 1 && a3 == 1 && a4 == 1) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}