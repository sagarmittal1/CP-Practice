#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n, a, b;
	cin >> n >> a >> b;
	int ans = 0;

	for (int i = 1; i <= n; i++) {
		if (i > a && n - i <= b ) {
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}