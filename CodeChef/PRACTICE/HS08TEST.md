# ATM

[Problem Link](https://www.codechef.com/problems/HS08TEST)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int x;
	float y;
	cin >> x >> y;

	if (x+0.5<=y && x % 5 == 0) {
		cout << fixed << setprecision(2) << y-x-0.5;
	} else {
		cout << fixed << setprecision(2) << y;
	}

	return 0;
}
```

> Oh man, this simple problem made my wrong answers and I know literray know what to do and what not to do. But I was just out of my mind.