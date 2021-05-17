#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
	fast;

	ll t; cin >> t;

	while (t--) {
		ll n; cin >> n;
		ll ans = 0;
		while (n != 0) {
			ans += n % 10;
			n /= 10;
		}
		cout << ans << endl;
	}

	return 0;
}