#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n; cin >> n;
	int total = 0;

	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		total += x;
	}

	total = total % (n + 1);

	int ans = 0;

	for (int i = 1; i <= 5; i++) {
		if ((total + i) % (n + 1) != 1) {
			ans++;
		}
	}

	cout << ans;


	return 0;
}