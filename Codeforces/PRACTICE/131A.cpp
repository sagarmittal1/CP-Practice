#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s; cin >> s;

	int x = 0; // 0 for changing 1 for not changing

	for (int i = 1; i < s.size(); i++) {
		if (islower(s[i])) {
			x = 1;
			break;
		}
	}

	if (x == 1) {
		cout << s;
	} else {
		if (isupper(s[0])) {
			s[0] = tolower(s[0]);
		} else {
			s[0] = toupper(s[0]);
		}

		for (int i = 1; i < s.size(); i++) {
			s[i] = tolower(s[i]);
		}
		cout << s;
	}

	return 0;
}