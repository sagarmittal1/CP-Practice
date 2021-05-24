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
		int n, d, a, b, c;
		cin >> n >> d >> a >> b >> c;
		n *= d;
		int ans = 0;

		if (n >= 42) {
			ans = c;
		} else if (n < 42 and n >= 21) {
			ans = b;
		} else if (n < 21 and n >= 10) {
			ans = a;
		} else {
			ans = 0;
		}

		cout << ans << endl;
	}

	return 0;
}