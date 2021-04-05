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
	string ans = "YES";

	for (int i = 0; i < n; i++) {
		if (s[i] == '1' and s[i + 1] == '4' and s[i + 2] == '4') {
			i += 2;
		} else if (s[i] == '1' and s[i + 1] == '4') {
			i++;
		} else if (s[i] != '1') {
			ans = "NO";
		} else {
			continue;
		}
	}
	cout << ans;

	return 0;
}