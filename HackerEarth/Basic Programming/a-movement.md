# A Movement

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/)

There are two solution I solved by first but the next soln is also great

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int steps = 0;

    while (n > 0) {
        if (n >= 5) {
            n -= 5;
            steps++;
        } else if (n >= 4) {
            n -= 4;
            steps++;
        } else if (n >= 3) {
            n -= 3;
            steps++;
        } else if (n >= 2) {
            n -= 2;
            steps++;
        } else if (n >= 1) {
            n -= 1;
            steps++;
        }
    }

    cout << steps;

    return 0;
}
```

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;


    if (n % 5 == 0) {
        cout << n / 5;
    } else {
        cout << n / 5 + 1;
    }


    return 0;
}
```

> I like the last one ss this is very good. Why am I not able to think it before.