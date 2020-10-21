# Palindromic String

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	string s;
	cin >> s;
	string s1;

	for (int i = s.length() - 1; i >= 0; i--) {
		s1 += s[i];
	}

	if (s1 == s) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}
```