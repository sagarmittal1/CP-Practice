# Birthday Party

[Problem Link](https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n, m;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		if (m % n == 0) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}

	return 0;
}
```

> A very simple problem