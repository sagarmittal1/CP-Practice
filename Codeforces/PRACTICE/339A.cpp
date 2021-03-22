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

	string s; cin >> s;
	string ans;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '+') {
			ans.push_back(s[i]);
		}
	}
	sort(ans.begin(), ans.end());

	cout << ans[0];

	for (int i = 1; i < ans.size(); i++) {
		cout << "+" << ans[i];
	}



	return 0;
}