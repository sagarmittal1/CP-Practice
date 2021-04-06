#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s; cin >> s;
	string x;

	for (int i = 0; i < s.size(); i++) {
		if (isupper(s[i])) {
			s[i] = tolower(s[i]);
		}
	}

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y') {
			continue;
		} else {
			x.push_back(s[i]);
		}
	}

	for (int i = 0; i < x.size(); i++) {
		cout << "." << x[i];
	}

	return 0;
}