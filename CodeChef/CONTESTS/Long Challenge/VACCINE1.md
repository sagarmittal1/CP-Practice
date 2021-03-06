# Vaccine Production

[Problem Link](https://www.codechef.com/DEC20B/problems/VACCINE1)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	int day = 0, made = 0;

	while (made < p) {
		day++;
		if (d1 <= day) {
			made += v1;
		}
		if (d2 <= day) {
			made += v2;
		}
	}
	cout << day;


	return 0;
}
```

> Firstly I don't get it correctly and some problem in implemation. But finally got it correct and then my first question on long challenge got it correct