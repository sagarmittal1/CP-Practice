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

	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	string ans = s1 + s2;
	sort(ans.begin(), ans.end());
	sort(s3.begin(), s3.end());

	if (s3 == ans) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}