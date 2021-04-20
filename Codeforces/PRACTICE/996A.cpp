#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;

	int ans = 0;

	while (n != 0) {
		ans++;
		if (n % 100 == 0) {
			n -= 100;
		} else if (n % 20 == 0) {
			n -= 20;
		} else if (n % 10 == 0) {
			n -= 10;
		} else if (n % 5 == 0) {
			n -= 5;
		} else {
			n--;
		}
	}

	cout << ans;

	return 0;
}