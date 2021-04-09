#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;

	if (n % 5 == 0) {
		cout << n / 5;
	} else {
		cout << n / 5 + 1;
	}

	return 0;
}