# Reverse the number

[Problem Link](https://www.codechef.com/LRNDSA01/problems/FLOW007)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		int rev = 0, rem;
		while (n != 0) {
			rem = n % 10;
			rev = rev * 10 + rem;
			n /= 10;
		}
		cout << rev << endl;
	}

	return 0;
}
```

> Basic question but not able to get the logic at first thought...