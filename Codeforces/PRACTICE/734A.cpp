#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

    int n; cin >> n;
	string s; cin >> s;
	int anton = 0, danik = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			anton++;
		} else {
			danik++;
		}
	}

	if (anton > danik) {
		cout << "Anton";
	} else if (danik > anton) {
		cout << "Danik";
	} else {
		cout << "Friendship";
	}

	return 0;
}