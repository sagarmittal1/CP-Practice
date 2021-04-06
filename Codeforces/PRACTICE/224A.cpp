// changed the build system & now don't need of ifndef type thing
// best thing done today
// from now onward no ONLINE_JUDGE type coming

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int x, y, z;
	cin >> x >> y >> z;

	int a, b, c;
	int root = sqrt(x * y * z);

	a = root / y;
	b = root / z;
	c = root / x;

	int ans = 4 * (a + b + c);
	cout << ans;

	return 0;
}