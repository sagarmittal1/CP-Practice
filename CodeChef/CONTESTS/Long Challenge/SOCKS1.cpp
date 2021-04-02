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

	int a, b, c;
	cin >> a >> b >> c;
	set <int> st;

	st.insert(a);
	st.insert(b);
	st.insert(c);

	if (st.size() != 3) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}