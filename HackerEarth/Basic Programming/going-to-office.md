# Going to office

[Problem Link](https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/going-to-office-e2ef3feb/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long d, oc, of, od, cs, cb, cm, cd, online, classic;
	cin >> d;
	cin >> oc >> of >> od;
	cin >> cs >> cb >> cm >> cd;

	online = oc + (d - of) * od;
	classic = cb + (d / cs) * cm + d * cd;

	if (online > classic) {
		cout << "Classic Taxi";
	} else {
		cout << "Online Taxi";
	}

	return 0;
}
```

> A very fine problem. It has everything and I liked the constraint and the test cases. This teach me when to use long long