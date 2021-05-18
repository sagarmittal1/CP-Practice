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
		int x = 5;
		int ans = 0;
		while (x <= n) {
			ans += n / x;
			x *= 5;
		}
		cout << ans << endl;
	}

	return 0;
}