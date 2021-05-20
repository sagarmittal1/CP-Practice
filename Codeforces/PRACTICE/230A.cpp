// first time used multimap & man this is amazing
// map has all thing required totally loved it...

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int s, n;
	cin >> s >> n;
	multimap <int, int> mp;
	string ans = "YES";

	while (n--) {
		int x, y;
		cin >> x >> y;
		mp.insert({x, y});
	}

	while (mp.size() != 0) {
		auto x = mp.begin();
		if (s > x->first) {
			s += x->second;
			mp.erase(x);
		} else {
			ans = "NO" ;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}