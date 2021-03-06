# e-maze-in

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int x = 0, y = 0;
    string com;
    cin >> com;

    for (int i = 0; i < com.length(); i++) {
        if (com[i] == 'L') {
            x -= 1;
        } else if (com[i] == 'R') {
            x += 1;
        } else if (com[i] == 'U') {
            y += 1;
        } else {
            y -= 1;
        }
    }

    cout << x << " " << y;


    return 0;
}
```

> Average problem to move around in coordintates.