// as n is very less then we can hard code lucky & check but
// this is more accurate & more coolish

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n; cin >> n;
	string ans = "NO";

	for (int i = 1; i <= 1000; i++) {
		string s = to_string(i);
		bool lucky = true;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != '4' and s[j] != '7') {
				lucky = false;
			}
		}
		if (lucky) {
			if (n % i == 0) {
				ans = "YES";
				break;
			}
		}
	}

	cout << ans;

	return 0;
}