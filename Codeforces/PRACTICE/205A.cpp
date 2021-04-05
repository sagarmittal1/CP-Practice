// the test cases of this questions are very tight
// that make me to think how to write optimized code just like this

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

	int n; cin >> n;
	int a[n];
	int min = 1e12, pos;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < min) {
			min = a[i];
			pos = i + 1;
		} else if (a[i] == min) {
			pos = -1;
		} else {
			continue;
		}
	}

	if (pos == -1) {
		cout << "Still Rozdil";
	} else {
		cout << pos;
	}

	return 0;
}