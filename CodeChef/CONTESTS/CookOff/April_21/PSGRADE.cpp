#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int t; cin >> t;

	while (t--) {
		int am, bm, cm, t, a, b, c;
		cin >> am >> bm >> cm >> t >> a >> b >> c;

		if (a >= am and b >= bm and c >= cm and a + b + c >= t ) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	return 0;
}