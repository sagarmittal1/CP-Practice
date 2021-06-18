#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string b[10] = {"fuk", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string c[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

    int n; cin >> n;

    if (n < 10) {
        cout << a[n] << endl;
    } else if (n % 10 == 0) {
        n /= 10;
        cout << b[n] << endl;
    } else if (n < 20) {
        cout << c[n % 10];
    } else {
        cout << b[n / 10];
        if (n % 10) {
            cout << "-" << a[n % 10] << endl;
        }
    }

    return 0;
}