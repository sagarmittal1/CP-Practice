#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int m, h;
		cin >> m >> h;
		int ans = m / (h * h);

		if (ans <= 18) {
			cout << "1" << "\n";
		} else if (ans <= 24 and ans >= 19) {
			cout << "2" << "\n";
		} else if (ans >= 25 and ans <= 29) {
			cout << "3" << "\n";
		} else {
			cout << "4" << "\n";
		}
	}

	return 0;
}