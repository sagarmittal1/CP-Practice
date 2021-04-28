#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;

	if (n % 2 != 0) {
		cout << -1;
	} else {
		int a[n];

		for (int i = 0; i < n; i++) {
			a[i] = i + 1;
		}

		for (int i = 0; i < n; i += 2 ) {
			swap(a[i], a[i + 1]);
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}

	return 0;
}