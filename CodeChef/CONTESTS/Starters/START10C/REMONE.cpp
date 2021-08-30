// upsolved this & this question was interesting 

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
        vector <ll> a(n);
        vector <ll> b(n - 1);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) cin >> b[i];

        sort(all(a)); sort(all(b));

        ll ans = b[0] - a[1];

        for (int i = 1; i < n; i++) {
            if (a[i] != b[i - 1] - ans) {
                ans = b[0] - a[0];
                break;
            }
        }

        if (ans <= 0) {
            ans = b[0] - a[0];
        }

        cout << ans << endl;
    }

    return 0;
}