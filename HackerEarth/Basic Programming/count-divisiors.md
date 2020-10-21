# Count Divisors

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int l, r, k;
	int count = 0;
	cin >> l >> r >> k;

	for (int i = l; i <= r; i++) {
		if (i % k == 0) {
			count += 1;
		} else {
			continue;
		}
	}

	cout << count;

	return 0;
}
```

#### Now I like to solve problems but they are simple so, I am not sure.