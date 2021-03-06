# VC Pairs

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/vc-pairs/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	string s;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> s;
		int count = 0;
		for (int j = 0; j < n; j++) {
			if (s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u') {
				if (s[j + 1] == 'a' || s[j + 1] == 'e' || s[j + 1] == 'i' || s[j + 1] == 'o' || s[j + 1] == 'u') {
					count++;
				}
			} else {
				continue;
			}
		}
		cout << count << endl;
	}

	return 0;
}
```

> That if loop condition is the most shitty I ever saw