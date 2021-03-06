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
		int n, k;
		cin >> n >> k;
		long long ar[k];
		for (int i = 0; i < k; i++) {
			cin >> ar[i];
		}

		while (n--) {
			string s; cin >> s;
			long long sum = 0;
			for (int i = 0; i < k; i++) {
				if (s[i] == '1') {
					sum += ar[i];
				} else {
					sum += 0;
				}
			}
			cout << sum << "\n";
		}
	}

	return 0;
}