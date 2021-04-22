#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int t; cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for (int i = 0; i < n; i++) cin >> a[i];

		int j = 0;

		for (int i = 0; i < k; i++) {
			while (j < n - 1 && a[j] == 0) {
				j++;
			}
			if (j >= n - 1) {
				break;
			}
			a[n - 1]++;
			a[j]--;
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}