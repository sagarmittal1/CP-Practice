#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n; cin >> n;
	set <pair<string, string>> st;

	while (n--) {
		string s1, s2;
		cin >> s1 >> s2;
		st.insert({s1, s2});
	}

	cout << st.size() << endl;

	return 0;
}