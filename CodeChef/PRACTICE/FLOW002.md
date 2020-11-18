# Find Remainder

[Problem Link](https://www.codechef.com/problems/FLOW002)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b, rem;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		rem = a % b;
		cout << rem << endl;
	}

	return 0;
}
```

> Don't worry about the remainder about it will be positve or not bcoz it will be always positive. SO don't worry boy..