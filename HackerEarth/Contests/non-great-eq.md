# Non Great Equation
## Dec. Easy '20 Challenge

[Problem Link](https://www.hackerearth.com/problem/approximate/gne-1043a924/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long b; cin >> b;
	long long a, c;

	c = ((b * b) + b) / 2;
	a = ((b * b) - b) / 2;

	cout << a << " " << c;

	return 0;
}
```

> This problem is of basic maths just solving a simple equation and happy to say that this is my first question of a HackerEarth contest.