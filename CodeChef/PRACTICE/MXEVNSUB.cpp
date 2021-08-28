#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll sum = (n * (n + 1)) / 2;
        if (sum % 2 == 0) {
            cout << n << endl;
        } else {
            cout << n - 1 << endl;
        }
    }

    return 0;
}