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
	set <char> st;

	for (int i = 0; i < s.size(); i++) {
		st.insert(s[i]);
	}
    
	int n = st.size();

	if (n % 2 != 0) {
		cout << "IGNORE HIM!" << endl;
	} else {
		cout << "CHAT WITH HER!" << endl;
	}


	return 0;
}