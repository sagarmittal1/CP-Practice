#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size();
	string ans = "YES";

	for (int i = 0; i < n; i++) {
		if (s1[i] != s2[n - i - 1]) {
			ans = "NO";
			break;
		}
	}

	cout << ans;

	return 0;
}