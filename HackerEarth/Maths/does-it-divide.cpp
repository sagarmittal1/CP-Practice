#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
	bool isPrime = true;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			isPrime = false;
		}
	}
	return isPrime;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		if ((n + 1) % 2 == 0) {
			cout << "YES" << endl;
		} else {
			if (prime(n+1)) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}
		}
	}

	return 0;
}