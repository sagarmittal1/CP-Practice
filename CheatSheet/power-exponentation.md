# Finding value of a exponentation

### We use the concept that if the power is even then we half the power & square the value & if the power is odd then we multiply base by result & decrease the power by 1. :smiley:

## The time complexity is *O(log(n))*

``` cpp
int power(int a, int n) {
	int res = 1;

	while (n) {
		if (n % 2 != 0) {
			res *= a;
			n--;
		} else {
			a *= a;
			n /= 2;
		}
	}
	return res;
}
```