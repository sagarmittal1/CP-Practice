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

	while (true) {
		n++;
		int a = n / 1000;
		int b = (n / 100) % 10;
		int c = (n / 10) % 10;
		int d = n % 10;

		if (a != b and a != c and a != d and b != c and b != d and c != d) {
			break;
		}
	}
	cout << n << endl;

	return 0;
}

// New best code

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

	while (true) {
		n++;
		string ss = to_string(n);
		int flag = true;

		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 4; j++) {
				if (ss[i] == ss[j]) {
					flag = false;
				}
			}
		}
		if (flag) {
			break;
		}

	}
	cout << n;
	return 0;
}