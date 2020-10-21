# Doctor's Secret

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/doctors-secret/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int name, pages;
    cin >> name >> pages;

    if ((name <= 23) && (pages >= 500 && pages <= 1000)) {
        cout << "Take Medicine";
    } else {
        cout << "Don't take Medicine";
    }

    return 0;
}
```

> Name make me think that it is diffcult but it is very simple..