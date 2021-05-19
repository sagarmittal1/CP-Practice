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
		int n, k;
		cin >> n >> k;
		vector <pair<string, int>> v;
		for (int i = 0; i < n; i++) {
			string x; cin >> x;
			v.pb(make_pair(x, 0));
		}
		while (k--) {
			int l; cin >> l;
			for (int i = 0; i < l; i++) {
				string s; cin >> s;
				for (int i = 0; i < v.size(); i++) {
					if (v[i].first == s) {
						v[i].second = 1;
					}
				}
			}
		}
		for (int i = 0; i < v.size(); i++) {
			if (v[i].second == 1) {
				cout << "YES" << " ";
			} else {
				cout << "NO" << " ";
			}
		}
		cout << endl;
	}

	return 0;
}