# Duration

[Problem Statement Link](https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/description/)

### My first easy problem in basic programming

``` c++
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int sh, sm, eh, em;
    int rh, rm;

    for (int i = 0; i < n; i++) {
        cin >> sh >> sm >> eh >> em;
        if ((em - sm) >= 0) {
            rm = em - sm;
            rh = eh - sh;
            cout << rh << " " << rm << endl;
        } else {
            rm = (em + 60) - sm;
            rh = (eh - 1) - sh;
            cout << rh << " " << rm << endl;
        }
    }

    return 0;
}
```

> I solve by simple using if and else statements but this is solved as by converting hours to minutes and then subtraction and then 