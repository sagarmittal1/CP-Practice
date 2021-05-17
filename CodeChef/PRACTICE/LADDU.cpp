#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

int main()
{
	fast;

	int t; cin >> t;

	while (t--) {
		int n;
		string nation;
		cin >> n >> nation;

		int total = 0;

		while (n--) {
			string s; cin >> s;

			if (s == "CONTEST_WON") {
				int x; cin >> x;
				if (x <= 20) {
					total += 300 + 20 - x;
				} else {
					total += 300;
				}
			}
			if (s == "TOP_CONTRIBUTOR") {
				total += 300;
			}
			if (s == "BUG_FOUND") {
				int x; cin >> x;
				total += x;
			}
			if (s == "CONTEST_HOSTED") {
				total += 50;
			}
		}

		if (nation[0] == 'I') {
			total /= 200;
		} else {
			total /= 400;
		}

		cout << total << endl;
	}

	return 0;
}