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
	int n, k;
	cin >> n >> k;

	while (k--) {
		if (n % 10 == 0) {
			n /= 10;
		} else {
			n--;
		}
	}
	cout << n;
    
	return 0;
}