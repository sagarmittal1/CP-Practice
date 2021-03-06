# Friend's Relationship

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/description/)

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
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
			for (int k = n - 1; k >= i; k--) {
				cout << "#";
			}
			for (int l = n - 1; l >= i; l--) {
				cout << "#";
			}
			for (int m = 1; m <= i; m++) {
				cout << "*";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
```

``` m
*################*
**##############**
***############***
****##########****
*****########*****
******######******
*******####*******
********##********
******************
```

> If his gf is real then I will ruin his life. This fucking problem take me a shit amount of time. The pattern is super crazy after lots of error I am happy to say that I finally put this into his ass.