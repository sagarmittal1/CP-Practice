// keep in mind that cashier needs to give change 1 time 
// so 15 sec will add only 1 time for 1 person

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
	int a[n];

	for (int i = 0; i < n; i++) cin >> a[i];

	int ans = 1e9;
	int x = 0;

	while (n--) {
		int total = 0;
		for (int i = 0; i < a[x]; i++) {
			int z; cin >> z;
			total += (z * 5) + 15;
		}
		// cout << total << endl;
		x++;
		if (total < ans) {
			ans = total;
		}
	}

	cout << ans << endl;

	return 0;
}