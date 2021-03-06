# Binary Search

## Time Complexity is O(log(n))
### It is implemented using divide & conquer basic imp. or by using recursion

Basic Implemantion
``` c++
int binarySearch(int ar[], int x, int l, int h) {
	int mid = l + (h - l) / 2;
	while (l <= h) {
		if (x == ar[mid]) {
			return mid;
		} else if (x > ar[mid]) {
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	}
	return -1;
}
```

Recursive Approach
``` c++
int binarySearch(int ar[], int x, int l, int h) {
	int mid = l + (h - l) / 2;
	while (l <= h) {
		if (ar[mid] == x) {
			return mid;
		}
		if (x > ar[mid]) {
			return binarySearch(ar, x, mid + 1, h);
		}
		return binarySearch(ar, x,  l,  mid - 1);
	}
	return -1;
}
```

``` c++
bool binarySearch(int ar[], int x, int l, int h) {
	int mid = l + (h - l) / 2;
	while (l <= h) {
		if (ar[mid] == x) {
			return true;
		} else if (x > ar[mid]) {
			l = mid + 1;
		} else {
			h = mid - 1;
		}
	}
	return false;
}
```