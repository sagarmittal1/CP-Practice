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

	int t; cin >> t;

	while (t--) {
		string s; cin >> s;
		for (int i = 0; i < s.size() - 4; i++) {
			if (s[i] == 'p' and s[i + 1] == 'a' and s[i + 2] == 'r' and s[i + 3] == 't' and s[i + 4] == 'y') {
				s[i + 2] = 'w';
				s[i + 3] = 'r';
				s[i + 4] = 'i';
			}
		}
		cout << s << endl;
	}

	return 0;
}