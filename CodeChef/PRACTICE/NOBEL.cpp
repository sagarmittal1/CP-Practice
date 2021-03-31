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
		int n, m;
		cin >> n >> m;
		int a[n];
		set <int> st;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			st.insert(a[i]);
		}

		string ans;

		if (st.size() == m) {
			ans = "No";
		} else {
			ans = "Yes";
		}

		cout << ans << endl;
	}

	return 0;
}