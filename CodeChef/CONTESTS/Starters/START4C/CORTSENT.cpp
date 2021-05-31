#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
	fast;

	int t; cin >> t;

	while (t--) {
		int k; cin >> k;
		string ans = "YES";
		while (k--) {
			string s; cin >> s;
			char ss = s[0];

			if (islower(ss)) {
				for (int i = 0; i < s.size(); i++) {
					if (islower(s[i]) and s[i] >= 'a' and s[i] <= 'm') {
						continue;
					} else {
						ans = "NO";
					}
				}
			}
			if (isupper(ss)) {
				for (int i = 0; i < s.size(); i++) {
					if (isupper(s[i]) and s[i] >= 'N' and s[i] <= 'Z') {
						continue;
					} else {
						ans = "NO";
					}
				}
			}
		}
		cout << ans << endl;
	}

	return 0;
}