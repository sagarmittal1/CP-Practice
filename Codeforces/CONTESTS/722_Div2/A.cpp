#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		int a[n];

		for (int i = 0; i < n; i++) cin >> a[i];

		sort(a, a + n);
		int x = a[0];
		int count = 0;

		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				count++;
			}
		}
		int ans = n - count;
		cout << ans << endl;
	}

	return 0;
}