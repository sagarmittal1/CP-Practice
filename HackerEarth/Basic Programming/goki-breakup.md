# Goki and his breakup

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int y[n];

    for (int i = 0; i < n; i++) {
        cin >> y[i];
        if (y[i] >= x) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }


    return 0;
}
```

> Another easy problem :disappointed: