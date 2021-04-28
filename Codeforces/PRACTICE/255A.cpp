#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;
	int a[n];
	int ch = 0, bi = 0, bo = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (i % 3 == 0) {
			ch += a[i];
		} else if ((i - 1) % 3 == 0) {
			bi += a[i];
		} else {
			bo += a[i];
		}
	}

	int x = max(ch, max(bi, bo));

	if (x == ch) {
		cout << "chest" << endl;
	} else if (x == bi) {
		cout << "biceps" << endl;
	} else {
		cout << "back" << endl;
	}

	return 0;
}