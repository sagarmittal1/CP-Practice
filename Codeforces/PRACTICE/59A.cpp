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

	string s;
	cin >> s;
	int lower = 0, upper = 0;

	for (int i = 0; i < s.size(); i++) {
		if (isupper(s[i])) {
			upper++;
		} else {
			lower++;
		}
	}

	if (upper > lower) {
		for (int i = 0; i < s.size(); i++) {
			s[i] = toupper(s[i]);
		}
	} else {
		for (int i = 0; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
	}

	cout << s;

	return 0;
}