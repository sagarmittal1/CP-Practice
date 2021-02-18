// getting tle in this question

#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n) {
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

bool primeSieve(int n) {
	int prime[n + 1] = {0};
	int count = 0;
	// 0 for prime | 1 for composite

	for (int i = 2; i <= n; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = 1;
			}
		}
	}
	prime[0] = prime[1] = 1;

	for (int i = 0; i <= n; i++) {
		if (prime[i] == 0) {
			count++;
		}
	}
	if (checkPrime(count)) {
		return true;
	} else {
		return false;
	}

}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		long long l, r;
		cin >> l >> r;
		long long sum = 0;
		for (int i = l; i <= r; i++) {
			if (primeSieve(i)) {
				sum++;
			}
		}
		cout << sum << "\n";
	}

	return 0;
}