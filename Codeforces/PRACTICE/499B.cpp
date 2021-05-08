#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n, m;
	cin >> n >> m;

	vector <pair<string, string>> v;

	while (m--) {
		string s1, s2, x;
		cin >> s1 >> s2;
		if (s1.size() > s2.size()) {
			x = s2;
		} else {
			x = s1;
		}
		v.pb(make_pair(s1, x));
	}

	while (n--) {
		string k; cin >> k;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first == k) {
				cout << v[i].second << " ";
			}
		}
	}

	return 0;
}