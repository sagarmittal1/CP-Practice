#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n; cin >> n;

	if (n % 100 == 0) {
		cout << n / 100;
	} else {
		cout << (n / 100) + 1;
	}

	return 0;
}