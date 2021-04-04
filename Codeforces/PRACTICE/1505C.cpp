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

	string s; cin >> s;
	int n = s.size();
	int a[n];

	for (int i = 0; i < n; i++) {
		a[i] = s[i] - 'A';
	}
	string ans = "YES";

	// for (int i = 0; i < n; i++) {
	// 	cout << a[i] << endl;
	// }

	for (int i = 2; i < n; i++) {
		if (a[i] != (a[i - 1] + a[i - 2]) % 26) {
			ans = "NO";
			break;
		}
	}
	cout << ans;

	return 0;
}