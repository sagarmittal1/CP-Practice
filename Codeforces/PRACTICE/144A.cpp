// This question literary took me one day due to a bug
// very happy to got it correct :):)

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
	int min = 1001, max = 0, minx = 0, maxx = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] <= min) {
			min = a[i];
			minx = i;
		}
		if (a[i] > max) {
			max = a[i];
			maxx = i;
		}
	}

	// cout << max << " " << min << " " << maxx << " " << minx;

	int ans = 0;

	while (minx != n - 1) {
		swap(a[minx], a[minx + 1]);
		if (minx + 1 == maxx) {
			maxx--;
		}
		minx++;
		ans++;
	}

	while (maxx != 0) {
		swap(a[maxx], a[maxx - 1]);
		maxx--;
		ans++;
	}

	cout << ans;

	return 0;
}