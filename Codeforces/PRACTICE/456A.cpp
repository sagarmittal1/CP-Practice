#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    ll n; cin >> n;
    vector <pair<ll, ll>> v;

    while (n--) {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    sort(all(v));
    string ans = "Poor Alex";

    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i].ff < v[i + 1].ff and v[i].ss > v[i + 1].ss) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}