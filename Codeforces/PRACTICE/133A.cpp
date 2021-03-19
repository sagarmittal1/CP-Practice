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
	string ans = "NO";

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9') {
			ans = "YES";
			break;
		}
	}

	cout << ans;

	return 0;
}