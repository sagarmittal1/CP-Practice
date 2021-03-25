#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

void solve(int n, int m, int x) {
	x--;
	int r = x % n;
	int c = x / n;
	cout << r*m + c + 1 << endl;
}

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	int t; cin >> t;

	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		solve(n, m, k);
	}

	return 0;
}