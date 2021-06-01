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

	int n; cin >> n;
	string s; cin >> s;
	int d = 0, u = 0;

	for (int i = 0; i < n; i++) {
		if (s[i] == 'x') {
			d++;
		} else {
			u++;
		}
	}

	int ans = 0;

	if (u == d) {
		ans = 0;
	} else if (u > d) {
		ans = u - n / 2;
		int x = 0;
		for (int i = 0; i < n; i++) {
			if (x == ans) {
				break;
			} else {
				if (s[i] == 'X') {
					s[i] = 'x'; x++;
				}
			}
		}
	} else {
		ans = d - n / 2;
		int x = 0;
		for (int i = 0; i < n; i++) {
			if (x == ans) {
				break;
			} else {
				if (s[i] == 'x') {
					s[i] = 'X'; x++;
				}
			}
		}
	}

	cout << ans << endl << s;

	return 0;
}