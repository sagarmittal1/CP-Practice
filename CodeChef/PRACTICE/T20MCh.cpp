// asked in starters march but not participte but solve it b/w

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int r, o, c;
	cin >> r >> o >> c;
	int over = 20 - o;

	int max = over * 36;
	if (c + max > r) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}