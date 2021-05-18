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
		set <int> st;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			st.insert(a[i]);
		}

		string ans = "yes";

		if (st.size() != 7 or * prev(st.end()) != 7) {
			ans = "no";
		}

		for (int i = 0; i < n; i++) {
			if (a[i] != a[n - 1 - i]) {
				ans = "no";
				break;
			}
		}

		cout << ans << endl;
	}

	return 0;
}