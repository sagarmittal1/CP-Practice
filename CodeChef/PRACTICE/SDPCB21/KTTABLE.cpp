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

    ll t; cin >> t;

    while (t--) {
        ll n; cin >> n;
        vector <ll> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        ll ans = 0;
        int xx; cin >> xx;
        if (xx <= a[0]) ans++;

        for (int i =  1; i < n; i++) {
            ll x; cin >> x;
            if (x <= a[i] - a[i - 1]) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}