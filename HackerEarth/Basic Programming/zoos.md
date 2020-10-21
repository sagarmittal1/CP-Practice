# Zoos

To find the whether the no. is follow like zoo

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	string zoo;
	int x = 0, y = 0;
	cin >> zoo;

	for (int i = 0; i < zoo.size(); i++) {
		if (zoo[i] == 'z') {
			x += 1;
		} else if (zoo[i] == 'o') {
			y += 1;
		} else {
			break;
		}
	}

	if (2 * x == y) {
		cout << "Yes";
	} else {
		cout << "No";
	}

	return 0;
}
```

Good problem....