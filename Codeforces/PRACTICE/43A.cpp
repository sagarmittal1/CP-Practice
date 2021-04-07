#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	string s[n];
	int t1 = 0, t2 = 0;
	string a, b;

	for (int i = 0; i < n; i++) {
		cin >> s[i];
		if (i == 0) {
			a = s[i];
		}
		if (s[i] == a) {
			t1++;
		} else {
			b = s[i];
			t2++;
		}
	}

	if (t1 > t2) {
		cout << a;
	} else {
		cout << b;
	}

	return 0;
}