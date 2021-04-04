## To check if a string is palindrome or not

Code
``` c++
bool palin(string s) {
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] != s[n - i - 1]) {
			return false;
		}
	}
	return true;
}
```