# Sieve of Eratosthenes

### For finding prime no. n very fast of time complexity O(nloglogn) 

``` c++
void primeSieve(int n) {
	int prime[n+1] = {0};
	// 0 for prime | 1 for composite

	for (int i = 2; i*i <= n; i++) {
		if (prime[i] == 0) {
			for (int j = i * i; j <= n; j += i) {
				prime[j] = 1;
			}
		}
	}
	prime[0] = prime[1] = 1;

	for (int i = 0; i <= n; i++) {
		if (prime[i] == 0) {
			cout << i << " ";
		}
	}

}
```
