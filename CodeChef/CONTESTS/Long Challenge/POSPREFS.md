# Positive Prefixes

[Problem Link](https://www.codechef.com/DEC20B/problems/POSPREFS)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, k, count = 0;
		cin >> n >> k;
		int arr[n];

		if (n % 2 == 0) {
			for (int i = 0; i < n; i++) {
				if (i % 2 == 0) {
					arr[i] = (i + 1) * (-1);
				} else {
					arr[i] = i + 1;
					count++;
				}
			}
		} else {
			for (int i = 0; i < n; i++) {
				if (i % 2 == 0) {
					arr[i] = (i + 1);
					count++;
				} else {
					arr[i] = (i + 1) * (-1);
				}
			}
		}

		if (count < k) {
			int diff = k - count, y = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (diff != y) {
					if (arr[i] < 0) {
						arr[i] = i + 1;
						y++;
					}
				} else {
					break;
				}
			}

		} else if (count > k) {
			int diff = count - k, y = 0;
			for (int i = n - 1; i >= 0; i--) {
				if (diff != y) {
					if (arr[i] > 0) {
						arr[i] = (i + 1) * (-1);
						y++;
					}
				} else {
					break;
				}
			}

		}

		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}

	return 0;
}
```

> I was not able to not understand this problem so I watched a video to understand and then I was able to find the solution of it.