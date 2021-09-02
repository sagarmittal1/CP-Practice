#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n, k;
	cin >> n >> k;

	while (k--) {
		if (n % 200 == 0) {
			n /= 200;
		} else {
			string s = to_string(n);
			s += "200";
			stringstream geek(s);
			int x = 0;
			geek >> x;
			n = x;
		}
	}

	cout << n;

	return 0;
}