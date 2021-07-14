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

    int t; cin >> t;

    while (t--) {
        ll ax, ay, bx, by, fx, fy;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        ll ans = 0;

        if (ax == bx and ax == fx) {
            if (fy >= min(ay, by) and fy <= max(ay, by)) {
                ans = abs(by - ay) + 2;
            } else {
                ans  = abs(by - ay);
            }
        } else if (ay == by and fy == ay) {
            if (fx >= min(ax, bx) and fx <= max(ax, bx)) {
                ans = abs(bx - ax) + 2;
            } else {
                ans = abs(bx - ax);
            }
        } else {
            ans = abs(bx - ax) + abs(by - ay);
        }
        cout << ans << endl;
    }

    return 0;
}