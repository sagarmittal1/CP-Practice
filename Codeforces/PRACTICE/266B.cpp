// very good question
// nice question to try implemantion question

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

	int n, t;
	cin >> n >> t;
	string s; cin >> s;

	while (t--) {
		for (int i = 0; i < n - 1; i++) {
			if (s[i] == 'B' and s[i + 1] == 'G') {
				swap(s[i], s[i + 1]);
				i++;
			}
		}
	}

	cout << s;

	return 0;
}