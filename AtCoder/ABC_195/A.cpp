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

	int m, h;
	cin >> m >> h;

	if (h % m == 0) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}