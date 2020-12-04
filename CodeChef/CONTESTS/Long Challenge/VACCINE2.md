# Vaccine Distribution

[Problem Link](https://www.codechef.com/DEC20B/problems/VACCINE2)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, d, risk = 0, nrisk = 0, days = 0;
		cin >> n >> d;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] >= 80 || arr[i] <= 9) {
				risk++;
			} else {
				nrisk++;
			}
		}
		if (risk % d == 0) {
			days += risk / d;
		} else {
			days += risk / d + 1;
		}

		if (nrisk % d == 0) {
			days += nrisk / d;
		} else {
			days += nrisk / d + 1;
		}

		cout << days << endl;
	}

	return 0;
}
```

> This gets me to that always read the statement carefully and then try to solve the problem.