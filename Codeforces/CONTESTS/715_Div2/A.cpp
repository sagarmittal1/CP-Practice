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
		int n; cin >> n;
		int a[n];
		vector <int> odd;
		vector <int> even;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] % 2 == 0) {
				even.push_back(a[i]);
			} else {
				odd.push_back(a[i]);
			}
		}

		sort(odd.begin(), odd.end());
		sort(even.begin(), even.end());

		for (auto v1 : odd) {
			cout << v1 << " ";
		}
		for (auto v2 : even) {
			cout << v2 << " ";
		}
		cout << endl;

	}

	return 0;
}