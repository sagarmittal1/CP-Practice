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
        ll n, k;
        cin >> n >> k;
        vi v(n);

        for (int i = 0; i < n; i++) cin >> v[i];

        sort(all(v));
        int x = 0;

        while (k != 0 and x < n) {
            if (v[x] < 0) {
                v[x] *= -1;
                x++;
                k--;
            } else {
                break;
            }
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) ans += v[i];
        }
        cout << ans << endl;
    }

    return 0;
}