# Enormonous Input and Output

[Problem Link](https://www.codechef.com/problems/INTEST/)

Tester Code :--
``` c++
// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <bits/stdc++.h> 

using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
// See the below code for details.

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// Read the input n, k
	int n, k;
	cin >> n >> k;

	// ans denotes number of integers n divisible by k
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		
		if (t % k == 0) {
			ans++;
		}		
	}

	// Print the ans.
	cout << ans << "\n";	
		
	return 0;
}
```
My Code  :
``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, k, x, count = 0;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x % k == 0) {
			count++;
		}
	}

	cout << count;

	return 0;
}
```