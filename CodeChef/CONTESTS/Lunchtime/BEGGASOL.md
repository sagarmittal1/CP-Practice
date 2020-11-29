# Gasoline Introduction LTIME90B

[Link](https://www.codechef.com/LTIME90B/problems/BEGGASOL)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int fuel = arr[0];
		int km = 0;
		for (int i = 1; i < n; i++) {
			if (fuel > 0) {
				fuel += arr[i];
				fuel--;
				km++;
			} else {
				break;
			}
		}
		cout << km + fuel << endl;
	}

	return 0;
}
```

> I participated in Lunchtime and can't solve on the first go but then I upsolve and got it correct. Now I am a 2 :star: coder in CodeChef.