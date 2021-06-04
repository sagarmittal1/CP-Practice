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
        ll a, b;
        cin >> a >> b;
        string ans = "YES";
        int tot = 0;

        if (a == b ) {
            tot = 0;
        }

        if (a > b) swap(a, b);

        if (b % a != 0) {
            ans = "NO";
        } else {
            ll n = b / a;
            while (n % 8 == 0) {
                n /= 8;
                tot++;
            }
            while (n % 4 == 0) {
                n /= 4;
                tot++;
            }
            while (n % 2 == 0) {
                n /= 2;
                tot++;
            }
            if (n != 1) ans = "NO";
        }
        if (ans == "YES") {
            cout << tot << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}