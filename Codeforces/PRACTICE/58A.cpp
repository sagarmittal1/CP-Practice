#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	string s; cin >> s;
	string f = "hello";
	int j = 0, x = 0;

	for (int i = 0; i < f.size(); i++) {
		while (s[j] != '\0') {
			if (f[i] == s[j]) {
				x++;
				j++;
				break;
			} else {
				j++;
			}
		}
	}

	if (x == 5) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}