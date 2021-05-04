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
	int n1 = 0, n2 = 0, n3 = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];

		if (a[i] == 1) {
			n1++;
		} else if (a[i] == 2) {
			n2++;
		} else {
			n3++;
		}
	}

	int teams = min(n1, min(n2, n3));
	cout << teams << endl;

	for (int i = 0; i < teams; i++) {
		for (int i = 0; i < n; i++) {
			if (a[i] == 1) {
				cout << i + 1 << " ";
				a[i] = -1;
				break;
			}
		}

		for (int i = 0; i < n; i++) {
			if (a[i] == 2) {
				cout << i + 1 << " ";
				a[i] = -1;
				break;
			}
		}

		for (int i = 0; i < n; i++) {
			if (a[i] == 3) {
				cout << i + 1 << " ";
				a[i] = -1;
				break;
			}
		}

		cout << endl;
	}

	return 0;
}