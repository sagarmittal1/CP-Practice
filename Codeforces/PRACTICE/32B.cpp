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

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '-' and s[i + 1] == '-') {
			cout << 2;
			i++;
		} else if (s[i] == '-' and s[i + 1] == '.') {
			cout << 1;
			i++;
		} else {
			cout << 0;
		}
	}

	return 0;
}