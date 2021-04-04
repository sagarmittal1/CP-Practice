#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

bool palin(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
	}
	return true;
}


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
		int n = s.size();
		string fuck = "a";
		string ans = "YES";
		int z = 0;

		for (int i = 0; i < n; i++) {
			if (s[i] != 'a') {
				z = 1;
			}
		}
		if (z == 0) {
			ans = "NO";
		}

		string qq, ss, st;
		ss = fuck + s;
		st = s + fuck;

		if (!palin(ss)) {
			qq = ss;
		} else {
			qq = st;
		}

		if (ans == "NO") {
			cout << ans << endl;
		} else {
			cout << ans << endl;
			cout << qq << endl;
		}
	}

	return 0;
}

//////////////////////
// Much better appraoch

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

bool palin(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
	}
	return true;
}


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

		if (!palin(s + 'a')) {
			cout << "YES" << endl;
			cout << s << 'a' << endl;
		} else if (!palin('a' + s)) {
			cout << "YES" << endl;
			cout << 'a' << s << endl;
		} else {
			cout << "NO" << endl;
		}

	}

	return 0;
}