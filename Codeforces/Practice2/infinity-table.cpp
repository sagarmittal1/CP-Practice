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
        ll x = sqrt(n);
        int r, c;


        if (x * x == n) {
            r = x;
            c = 1;
        } else {
            x++;
            r = 1; c = x;
            for (int i = (x - 1) * (x - 1) + 1; i < x * x; i++) {
                if (i == n) {
                    break;
                } else {
                    if (r == x) {
                        c--;
                    } else {
                        r++;
                    }
                }
            }
        }
        if (n == 1) {
            r = 1; c = 1;
        }
        cout << r << " " << c << endl;
    }

    return 0;
}