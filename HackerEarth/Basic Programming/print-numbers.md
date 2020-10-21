# Print the numbers

> Another easy problem same as on HackerRank

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
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
```

> Some are easy like this and some are diffcult that I can't able to solve