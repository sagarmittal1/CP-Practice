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
		multiset <int> ms;

		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			ms.insert(x);
		}

		int m; cin >> m;

		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			while (ms.find(x) != ms.end()) {
				cout << x << " ";
				ms.erase(ms.find(x));
			}

		}
		for (auto s : ms) {
			cout << s << " ";
		}
		cout << endl;
	}

	return 0;
}