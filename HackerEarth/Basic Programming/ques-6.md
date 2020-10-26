# Ques 6

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/ques-6/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t, n;
	cin >> t;

	for (int s = 0; s < t; s++) {
		cin >> n;

		for (int i = 1; i <= n; i++) {
			for (int j = n; j > i; j--) {
				cout << " ";
			}
			for (int k = 1; k <= (2 * i - 1); k++) {
				cout << "*";
			}
			cout << endl;
		}
	}

	return 0;
}
```

> After so much time with this fucking patters finally able to get this correct. HELL YEAH 