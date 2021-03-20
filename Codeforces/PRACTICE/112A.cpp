// solved this using stl for upper & lower

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
	int ans = 0;

	for (int i = 0; i < s1.size(); i++) {
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}


	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] < s2[i]) {
			ans = -1;
			break;
		} else if (s1[i] > s2[i]) {
			ans = 1;
			break;
		} else {
			continue;
		}
	}
	cout << ans;


	return 0;
}