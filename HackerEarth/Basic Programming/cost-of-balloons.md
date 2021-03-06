# Cost Of Balloons

My first problem on HackerEarth and blew my mind...

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/submissions/?filter=all&sort=most-likes)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	int n, cost1[t], cost2[t];

	for (int i = 0; i < t; i++) {
		cin >> cost1[i] >> cost2[i];
		cin >> n;
		int n1[n], n2[n];
		for (int j = 0; j < n; j++) {
			cin >> n1[j] >> n2[j];
		}
		int sum_n1 = 0;
		int sum_n2 = 0;
		for (int k = 0; k < n; k++) {
			sum_n1 += n1[k];
			sum_n2 += n2[k];
		}
		int q = cost1[i] * sum_n1 + cost2[i] * sum_n2;
		int w = cost2[i] * sum_n1 + cost1[i] * sum_n2;
		if (q > w) {
			cout << w << endl;
		} else {
			cout << q << endl;
		}
	}

	return 0;
}
```

Solved by my own !!!!!!!!