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
        ll n, m, l;
        cin >> n >> m >> l;
        vi a(n, 0);

        while (m--) {
            int k; cin >> k;
            for (int i = 0; i < k; i++) {
                int x; cin >> x;
                a[x] = m;
            }
        }

        int ans = 1;
        int b[l];
        cin >> b[0];
        for (int i = 1; i < l; i++) {
            cin >> b[i];
            int xx = b[i - 1];
            int yy = b[i];
            if (a[xx] != a[yy]) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}