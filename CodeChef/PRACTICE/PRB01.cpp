#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	bool isPrime = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrime = false;
			break;
		}
	}
	if (n == 1) isPrime = false;
	return isPrime;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		if (prime(n)) {
			cout << "yes" << "\n";
		} else {
			cout << "no" << "\n";
		}
	}

	return 0;
}