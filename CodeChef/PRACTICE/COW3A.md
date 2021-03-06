# Fruit Basket

[Problem Link](https://www.codechef.com/problems/COW3A)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, a, b, c, d;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b >> c >> d;
		int x = 0, y = 0, z = 0;
		x = d - b;
		y = d - c;
		z = d - a;
		cout << x << " " << y << " " << z << endl;
	}

	return 0;
}
```

> Don't shocked these are just cakewalk problem