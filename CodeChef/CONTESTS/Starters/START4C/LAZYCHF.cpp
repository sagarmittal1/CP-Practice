#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
	fast;

	int t; cin >> t;

	while (t--) {
		int x, m, d;
		cin >> x >> m >> d;
		int k1 = x * m, k2 = x + d;
		int ans = min(k1, k2);
		cout << ans << endl;
	}

	return 0;
}