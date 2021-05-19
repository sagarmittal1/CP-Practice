// first time used map & man this is amazing

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n; cin >> n;
	map <int, int> mp;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		mp.insert({x, i + 1});
	}

	int q; cin >> q;
	int vasya = 0, petya = 0;
	while (q--) {
		int x; cin >> x;
		auto it = mp.find(x);
		vasya += it->second;
		petya += n - it->second + 1;
	}

	cout << vasya << " " << petya << endl;


	return 0;
}