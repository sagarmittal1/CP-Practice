# char sum

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/description/)

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif

    string s;
    cin >> s;
    int weight = 0;

    for (int i = 0; i < s.size(); i++) {
        weight += (s[i] - 96);
    }

    cout << weight;

    return 0;
}
```

> Used the application of ascii value to calculate weight