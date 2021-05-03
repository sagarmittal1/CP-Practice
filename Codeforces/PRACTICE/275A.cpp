#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int a[5][5] = {0};

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			int x = a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j + 1] + a[i][j - 1];

			if (x % 2 == 0) {
				cout << 1;
			} else {
				cout << 0;
			}
		}
		cout << endl;
	}


	return 0;
}


///////////////////////////
// my code initially was this below

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int a[5][5] = {0};
	int x[5][5];

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			cin >> a[i][j];
			if (a[i][j] % 2 != 0) {
				a[i][j] = 1;
			} else {
				a[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			x[i][j] = 1;
		}
	}

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			if (a[i][j] == 1) {
				if (x[i][j] == 1) {
					x[i][j] = 0;
				} else {
					x[i][j] = 1;
				}

				if (x[i - 1][j] == 1) {
					x[i - 1][j] = 0;
				} else {
					x[i - 1][j] = 1;
				}

				if (x[i + 1][j] == 1) {
					x[i + 1][j] = 0;
				} else {
					x[i + 1][j] = 1;
				}

				if (x[i][j - 1] == 1) {
					x[i][j - 1] = 0;
				} else {
					x[i][j - 1] = 1;
				}

				if (x[i][j + 1] == 1) {
					x[i][j + 1] = 0;
				} else {
					x[i][j + 1] = 1;
				}
			}
		}
	}

	for (int i = 1; i < 4; i++) {
		for (int j = 1; j < 4; j++) {
			cout << x[i][j];
		}
		cout << endl;
	}


	return 0;
}