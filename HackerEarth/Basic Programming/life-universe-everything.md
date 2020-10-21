# Life, the Universe, and Everything

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/life-the-universe-and-everything)

> A famous problem that I saw previously on CodeChef and now solved it easily without any error. That's is great

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    int a;

    for (; ;) {
        cin >> a;
        if (a != 42) {
            cout << a << endl;
        } else {
            break;
        }
    }

    return 0;
}
```

> btw I like for loop very much 

> Tried to solve it on codechef but it is showing runtime error :(