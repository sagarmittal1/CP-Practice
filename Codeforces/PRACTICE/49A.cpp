#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s;
	getline(cin, s);
	int x = 101;

	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) {
			s[i] = tolower(s[i]);
			x = i;
		}
	}

	if (s[x] == 'a' or s[x] == 'e' or s[x] == 'i' or s[x] == 'o' or s[x] == 'u' or s[x] == 'y') {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}