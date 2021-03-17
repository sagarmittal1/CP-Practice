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

	int t; cin >> t;

	while (t--) {
		string s; cin >> s;
		stack <char> st;
		for (int i = 0; i < s.size(); i++) {
			if (st.empty()) {
				st.push(s[i]);
			} else {
				if (st.top() == '0' and s[i] == '0') {
					st.pop();
				} else if (st.top() == '1' and s[i] == '1') {
					st.pop();
				} else {
					st.push(s[i]);
				}
			}
		}

		if (st.empty()) {
			cout << "KHALI" << endl;
		} else {
			vector <char> v;
			while (!st.empty()) {
				int x = st.top();
				v.push_back(x);
				st.pop();
			}
			for (int i = v.size() - 1; i >= 0; i--) {
				cout << v[i];
			} cout << endl;
		}
	}

	return 0;
}