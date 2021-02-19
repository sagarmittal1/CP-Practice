# Sieve for finding min. prime no.

### We initialized the array with initial elements then we take min of them & output it..

``` c++
int ar[1000001];

void sieve() {
	int n = 1000000;
	// initializing aray with their initials
	for (int i = 1; i <= n; i++) ar[i] = i;

	for (int i = 2; i <= n; i++) {
		if (ar[i] == i) {
			for (int j = i * 2; j <= n; j += i) {
				ar[j] = min(ar[j], i);
			}
		}
	}
}
```