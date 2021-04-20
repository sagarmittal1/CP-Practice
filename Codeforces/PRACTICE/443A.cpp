#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s;
	getline(cin, s);

	set <char> st;

	for (int i = 0; i < s.size(); i++) {
		if (isalpha(s[i])) {
			st.insert(s[i]);
		}
	}

	cout << st.size();

	return 0;
}

// now I understand how important set is..