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
        ll n; cin >> n;
        string s; cin >> s;
        ll x = 0;
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--) {
            ll p = pow(2, x);
            ans += (s[i] - '0') * p;
            x++;
        }
        cout << ans << endl;
    }

    return 0;
}