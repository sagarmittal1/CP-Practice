#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int t; cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];

		for (int i = 0; i < n; i++) {
			int j = (i + k) % n;
			cin >> a[j];
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

///////////////////////////////////////////
// This solution also works but falied in 1 test case

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

		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		k %= n;
		while (k--) {
			int last = a[n - 1];
			for (int i = n - 1; i >= 1; i--) {
				a[i] = a[i - 1];
			}
			a[0] = last;
		}

		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}