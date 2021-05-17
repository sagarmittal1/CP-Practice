#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
	fast;

	int n; cin >> n;

	while (n--) {
		int h, t;
		float c;
		cin >> h >> c >> t;

		int ans;

		if (h > 50 and c < 0.7 and t > 5600) {
			ans = 10;
		} else if (h > 50 and c < 0.7) {
			ans = 9;
		} else if (c < 0.7 and t > 5600) {
			ans = 8;
		} else if (h > 50 and t > 5600) {
			ans = 7;
		} else if (h > 50 || c < 0.7 || t > 5600) {
			ans = 6;
		} else {
			ans = 5;
		}

		cout << ans << endl;
	}

	return 0;
}