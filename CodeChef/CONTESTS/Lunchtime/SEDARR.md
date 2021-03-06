# Sed Sequences
### December Lunchtime 2020

[Link](https://www.codechef.com/LTIME91B/problems/SEDARR)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, k, sum = 0, ans = 1;;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
			if (sum % k == 0) {
				ans = 0;
			} else {
				ans = 1;
			}
		}
		cout << ans << endl;
	}

	return 0;
}
```

> Easy question same as that I solved on HackerEarth. So we should pratice more