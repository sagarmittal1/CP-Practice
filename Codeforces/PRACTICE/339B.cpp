// I always thought this was tough until I understand it today
// and it requirs only some imagaination

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n, m;
	cin >> n >> m;
	int ans = 0;
	int h = 1;

	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		if (x >= h) {
			ans += x - h;
			h = x;
		} else {
			ans += (n - h) + 1 + (x - 1);
			h = x;
		}
	}

	cout << ans << endl;


	return 0;
}