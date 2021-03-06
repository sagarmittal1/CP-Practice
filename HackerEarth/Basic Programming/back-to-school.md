# Back to school

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/editorial/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 > n2) {
        if (n1 > n3) {
            cout << n1;
        } else {
            cout << n3;
        }
    } else {
        if (n2 > n3) {
            cout << n2;
        } else {
            cout << n3;
        }
    }

    return 0;
}
```

> This is a different approach but this question also has a simpler solution.