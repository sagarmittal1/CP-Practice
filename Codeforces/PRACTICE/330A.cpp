// this question was told by code with demoralizer in his video
// at that I could not solve, but after try finally it is done

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int r, c;
	cin >> r >> c;
	char a[r][c];

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}

	int ans = 0;

	for (int i = 0; i < r; i++) {
		bool stra = false;
		for (int j = 0; j < c; j++) {
			if (a[i][j] == 'S') {
				stra = true;
			}
		}
		if (!stra) {
			ans += c;
			for (int j = 0; j < c; j++) {
				a[i][j] = '#';
			}
		}
	}

	for (int i = 0; i < c; i++) {
		bool stra = false;
		for (int j = 0; j < r; j++) {
			if (a[j][i] == 'S') {
				stra = true;
			}
		}

		if (!stra) {
			for (int j = 0; j < r; j++) {
				if (a[j][i] == '.') {
					ans++;
				}
			}
		}
	}

	cout << ans;

	return 0;
}