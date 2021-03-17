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
	stack <char> st;

	for (int i = 0; i < s.size(); i++) {
		if (st.empty()) {
			st.push(s[i]);
		} else {
			if (st.top() == '(' and s[i] == ')') {
				st.pop();
			} else {
				st.push(s[i]);
			}
		}
	}

	int ans = 0;
	while (!st.empty()) {
		st.pop();
		ans++;
	}
	cout << ans;

	return 0;
}