# Chef and the Street food

[Problem Link](https://www.codechef.com/LRNDSA02/problems/STFOOD)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, max = 0; cin >> n;
		for (int i = 0; i < n; i++) {
			int s, p, v, profit;
			cin >> s >> p >> v;
			profit = (p / (s + 1)) * v;
			if (i == 0) {
				max = profit;
			} else if (profit > max) {
				max = profit;
			}
		}
		cout << max << endl;
	}

	return 0;
}
```

> Problem of DSA Learning Series 2