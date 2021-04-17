#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	float x, y, z;
	cin >> x >> y >> z;

	float ans = (y / x) * z;

	if (ans == floor(ans)) {
		ans--;
	} else {
		ans = floor(ans);
	}

	cout << ans;

	return 0;
}