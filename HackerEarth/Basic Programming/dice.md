# Dice

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/the-dice-d4dc5b11)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int x = 0;
	int n = s.length();

	for (int i = 0; i < n; i++) {
		if (s[i] == ('0' || '7' || '8' || '9')) {
			break;
		} else if (s[i] == '6') {
			continue;
		} else {
			x++;
		}

		if (s[n - 1] == '6') {
			x = 0;
			break;
		}
	}

	if (x != 0) {
		cout << x;
	} else {
		cout << "-1";
	}

	return 0;
}
```

> This tells me that to think of all test cases as if that last no. is 6 then it is also invalid.