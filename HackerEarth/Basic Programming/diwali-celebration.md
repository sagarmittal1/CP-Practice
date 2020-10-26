# Diwali Celebration

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/diwali-celebration/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t, a, k, n, sum;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> n >> k;
		sum = a + ((k - 1) * n);
		cout << sum << endl;
	}

	return 0;
}
```

> Finally after solving many problems and getting hopeless, this simple problem give me some hope.