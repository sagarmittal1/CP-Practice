// know that vector will work but not have gut to try that out early

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
	vector <char> v;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '.') {
			break;
		} else {
			v.push_back(s[i]);
		}
	}

	for (auto v1 : v) {
		cout << v1;
	}

	return 0;
}