#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int i = 0; i < m; i++) {
				cout << '#';
			}
		} else {
			if ((i + 1) % 4 == 0) {
				cout << '#';
				for (int i = 0; i < m - 1; i++) {
					cout << '.';
				}
			} else {
				for (int i = 0; i < m - 1; i++) {
					cout << '.';
				}
				cout << '#';
			}
		}


		cout << endl;
	}

	return 0;
}