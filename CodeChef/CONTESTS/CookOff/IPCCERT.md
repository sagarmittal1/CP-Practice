# Chef and IPC Certificates

[Problem Link](https://www.codechef.com/COOK124B/problems/IPCCERT)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, k, q, k1, count = 0;
	cin >> n >> m >> k;

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < k; j++) {
			cin >> k1;
			sum += k1;
		}
		cin >> q;
		if (sum >= m && q <= 10) {
			count++;
		}
	}

	cout << count;

	return 0;
}
```

> This is the question of november cookoff and this is very easy as you can see it but I did't participate. Gonna particpate next month..