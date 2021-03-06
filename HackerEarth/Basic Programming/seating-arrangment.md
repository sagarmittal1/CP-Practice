# Seating Arrangement

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/submissions/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int n;
    cin >> n;
    int seat[n];

    for (int i = 0; i < n; i++) {
        cin >> seat[i];

        switch (seat[i] % 12) {
        case 1: cout << seat[i] + 11 << " " << "WS" << endl; break;
        case 2: cout << seat[i] + 9 << " " << "MS" << endl; break;
        case 3: cout << seat[i] + 7 << " " << "AS" << endl; break;
        case 4: cout << seat[i] + 5 << " " << "AS" << endl; break;
        case 5: cout << seat[i] + 3 << " " << "MS" << endl; break;
        case 6: cout << seat[i] + 1 << " " << "WS" << endl; break;
        case 7: cout << seat[i] - 1 << " " << "WS" << endl; break;
        case 8: cout << seat[i] - 3 << " " << "MS" << endl; break;
        case 9: cout << seat[i] - 5 << " " << "AS" << endl; break;
        case 10: cout << seat[i] - 7 << " " << "AS" << endl; break;
        case 11: cout << seat[i] - 9 << " " << "MS" << endl; break;
        case 0: cout << seat[i] - 11 << " " << "WS" << endl; break;

        }
    }

    return 0;
}
```

> This took me a whole time as I don't know the concept and I don't know why I can't solve just simple switch statement.

### This reminds me of code more and learn more. :squirk: