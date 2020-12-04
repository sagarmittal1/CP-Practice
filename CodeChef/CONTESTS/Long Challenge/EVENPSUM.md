# Even Pair Sum

[Problem Link](https://www.codechef.com/DEC20B/problems/EVENPSUM)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		long long a, b;
		cin >> a >> b;
		long long oa, ob, ea, eb, total;
		if (a % 2 != 0) {
			oa = a / 2 + 1;
			ea = a - a / 2 - 1;
		} else {
			oa = a / 2;
			ea = oa;
		}

		if (b % 2 != 0) {
			ob = b / 2 + 1;
			eb = b - b / 2 - 1;
		} else {
			ob = b / 2;
			eb = ob;
		}
		total = oa * ob + ea * eb;
		cout << total << endl;
	}

	return 0;
}
```

> First got partial marks then got it full by just changing the int to long long
>> So this is my solution that i solve till now. This is my first long challenge and I am happy with it and I am going to achieve more and solve more. 
>>> I am able to solve these 3 in the first day.