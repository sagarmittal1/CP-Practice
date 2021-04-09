#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int k, n, w;
	cin >> k >> n >> w;

	int total = (k * w * (w + 1)) / 2;

	if (total - n > 0) {
		cout << total - n;
	} else {
		cout << "0";
	}

	return 0;
}