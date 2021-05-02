// probably the most complicated soluton I have ever wrote

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	string s; cin >> s;
	vector <pair<int, string>> v;

	for (int i = 0; i < n - 1; i++) {
		string x = s.substr(i, 2);
		bool check = false;

		for (int i = 0; i < v.size(); i++) {
			if (v[i].second == x) {
				check = true;
				v[i].first += 1;
			}
		}

		if (!check) {
			v.push_back(make_pair(0, x));
		}
	}

	sort(v.begin(), v.end());

	int k = v.size() - 1;

	cout << v[k].second;

	return 0;
}