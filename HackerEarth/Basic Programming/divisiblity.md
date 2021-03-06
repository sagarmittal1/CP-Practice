# Divisiblity

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/)

```c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int k;

    for (int i = 0; i < n; i++) {
        cin >> k;
    }

    if (k % 10 == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
```

> After two partial test case passed, finally get the answer correct by not using array.