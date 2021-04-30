#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n; cin >> n;

	if (n == 0) {
		cout << "O-|-OOOO";
	}

	while (n > 0) {
		int x = n % 10;
		n /= 10;

		if (x >= 5) {
			cout << "-O|";
			x -= 5;
		} else {
			cout << "O-|";
		}

		if (x == 0) {
			cout << "-OOOO";
		} else if (x == 1) {
			cout << "O-OOO";
		} else if (x == 2) {
			cout << "OO-OO";
		} else if (x == 3) {
			cout << "OOO-O";
		} else {
			cout << "OOOO-";
		}

		cout << endl;
	}

	return 0;
}