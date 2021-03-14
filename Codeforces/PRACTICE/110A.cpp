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

	int n; cin >> n;
	string s = to_string(n);
	int lucky = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '4' or s[i] == '7') {
			lucky++;
		}
	}

	if (lucky == 4 or lucky == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}


	return 0;
}