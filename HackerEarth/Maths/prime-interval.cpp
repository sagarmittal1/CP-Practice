#include <bits/stdc++.h>
using namespace std;

// funtion for finding whether prime or not
bool prime(int n) {
	bool isPrime = true;
	if (n >= 2) {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
	} else {
		isPrime = false;
	}
	return isPrime;
}


int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int l, r;
	cin >> l >> r;

	for (int i = l; i <= r; i++) {
		if (prime(i)) {
			cout << i << " ";
		}
	}

	return 0;
}
