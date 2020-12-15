# A. Favorite Sequence

[Problem Link](https://codeforces.com/contest/1462/problem/A)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		int arr[n], pol[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {
			if (i == 0) {
				pol[i] = arr[i];
			}
			if (i % 2 == 0) {
				pol[i] = arr[i / 2];
			} else {
				// int k = n - 1;
				pol[i] = arr[n - ((i + 1) / 2)];

			}
			cout << pol[i] << " ";
		}
		cout << endl;

	}

	return 0;
}
```

> First question of contest. Only try this this question. So, no other question solved