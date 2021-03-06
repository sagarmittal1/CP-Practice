# Book of Potion Making

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int isbn, sum = 0, i = 10;
    cin >> isbn;

    while (isbn != 0) {
        sum += ((isbn % 10) * i--);
        isbn /= 10;
    }

    if (sum % 11 == 0) {
        cout << "Legal ISBN";
    } else {
        cout << "Illegal ISBN";
    }

    return 0;
}
```

> This fucking problem took me a day as I usually used for loop and my approach is different able to solve by seeing it on youtube