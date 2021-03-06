# Conject-it

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/conject-it/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	while(t--){
		cout << "YES" << endl;
	}

	return 0;
}
```

### The problem is known as Collatz Conjecture or 3N+1 conjecture and it states that every positive integral number will ultimately lead to 1 if the operations that was described in the problem was performed. 
    
### Hence the answer would be cout<<"yes"; for all cases.
      
### Key was to guess it through the constraints that the actual operations need not be performed on the numbers, and it would've actually lead to TLE had there been tight constraints.

> So, I don't know this and get the TLE error and that's it......