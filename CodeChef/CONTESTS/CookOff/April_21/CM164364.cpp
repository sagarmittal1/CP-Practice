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
		int n, x;
		cin >> n >> x;
		int a[n];

		set <int> st;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			st.insert(a[i]);
		}

		int ans;

		if (st.size() == n) {
			ans = n - x;
		} else {
			if (st.size() + x > n) {
				int k = n - st.size();
				int m = x - k;
				ans = st.size() - m;
			} else {
				ans = st.size();
			}
		}

		cout << ans << endl;
	}

	return 0;
}