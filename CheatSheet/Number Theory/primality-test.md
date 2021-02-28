# Primailty test 

### It is a test to check whether a no. is prime or not which has time complexity O(sqrt(n))

``` cpp
// function for finding whether prime or not
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
```