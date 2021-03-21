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

	string s1, s2;
	cin >> s1 >> s2;

	int n = s1.size();
	int a[n];

	for (int i = 0; i < n; i++) {
		if (s1[i] != s2[i]) {
			a[i] = 1;
		} else {
			a[i] = 0;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i];
	}

	return 0;
}