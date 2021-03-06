// https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/in-love-with-primes/editorial/

// my first question of maths section 
// good question of using prime

#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
	int isPrime = 0;
	for(int i = 2; i*i < n; i++) {
		if(n%i == 0) {
			isPrime = 1;
			break;
		}else {
			continue;
		}
	}
	return isPrime;
}

int main()
{
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		string ans = "Arjit";
		for(int i = 2; i < n; i++) {
			int x = i, y = n-i;
			if(prime(x) == 0 and prime(y) == 0) {
				ans = "Deepa";
				break;
			}else{
				continue;
			}
		}
		cout << ans << endl;
	}
}
