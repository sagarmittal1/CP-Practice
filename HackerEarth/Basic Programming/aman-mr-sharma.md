# Aman and Mr. Sharma

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int d, r, x;
    int toffees = 0;

    cin >> d;

    for (int i = 0; i < d; i++) {
        cin >> r >> x;
        if ((100 * x) >= ((2 * 22 * r) / 7)) {
            toffees++;
        }
    }

    cout << toffees;

    return 0;
}
```

> In hackerearth it has very less correct submission like to about 35% but I was able to solve in one attempt.