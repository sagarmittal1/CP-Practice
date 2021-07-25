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
        ll x, y;
        cin >> x >> y;
        int sum = x + y;
        double ans = 0;

        for (int i = 1; i <= 6; i++) {
            if (i > sum) {
                ans++;
            }
        }

        ans /= 6.0;
        printf("%f\n", ans);

    }

    return 0;
}