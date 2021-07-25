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

    ll t; cin >> t;

    while (t--) {
        ll n; cin >> n;
        if (n % 10 == 9) {
            cout << n / 10 + 1 << endl;
        } else {
            cout << n / 10 << endl;
        }
    }

    return 0;
}