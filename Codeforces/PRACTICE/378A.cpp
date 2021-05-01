#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	int a, b;
	cin >> a >> b;

	int aw = 0, dr = 0, bw = 0;

	for (int i = 1; i <= 6; i++) {
		int x = abs(i - a);
		int y = abs(i - b);

		if (x > y) {
			bw++;
		} else if (x < y) {
			aw++;
		} else {
			dr++;
		}
	}

	cout << aw << " " << dr << " " << bw;

	return 0;
}