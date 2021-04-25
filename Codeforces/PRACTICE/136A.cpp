// Using Pairs with vectors after months
// was not sure whether I will be able to do it, but do it anyway ;)

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	vector <pair<int, int>> v;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		v.push_back(make_pair(x, i + 1));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		cout << v[i].second << " ";
	}

	return 0;
}