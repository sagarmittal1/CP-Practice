# Factorial!

Simple solved it before

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int factorial(int i) {
	if (i != 1) {
		i = i * factorial(i - 1);
	} else {
		return i;
	}
	return i;
}

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
	cin >> n;
	cout << factorial(n);

	return 0;
}
```