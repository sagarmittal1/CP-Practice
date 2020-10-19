# Roy and Profile Picture

Use of if else statement, input-output and arrays

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int l, n;

	cin >> l;
	cin >> n;

	int w[n], h[n];

	for (int i = 0; i < n; i++) {
		cin >> w[i] >> h[i];
		if (w[i] < l || h[i] < l) {
			cout << "UPLOAD ANOTHER" << endl;
		} else {
			if (w[i] == h[i]) {
				cout << "ACCEPTED" << endl;
			} else {
				cout << "CROP IT" << endl;
			}
		}
	}

	return 0;
}
```

#### My third problem in HackerEarth