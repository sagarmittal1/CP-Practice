#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int a, b, c, k;

int F(int x) {
	return a * x * x + b * x + c;
}

int binarySearch() {
	if (c >= k) return 0;

	int l = 1;
	int h = ceil(sqrt(k));


	while (l <= h) {
		int mid = l + (h - l) / 2;
		int x = F(mid);
		int y = F(mid - 1);

		if (x >= k and y < k) {
			return mid;
		}

		if (x < k) {
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	}
}


int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int t; cin >> t;

	while (t--) {
		cin >> a >> b >> c >> k;
		cout << binarySearch() << endl;
	}

	return 0;
}