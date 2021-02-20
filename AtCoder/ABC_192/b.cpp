#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string s; cin >> s;
	string ans = "Yes";

	for (int i = 0; i < s.size(); i++) {
		if (i % 2 == 0) {
			if (s[i] >= 97 and s[i] <= 122) {
				continue;
			} else {
				ans = "No";
				break;
			}
		} else {
			if (s[i] >= 65 and s[i] <= 90) {
				continue;
			} else {
				ans = "No";
				break;
			}
		}
	}

	cout << ans;
	return 0;
}