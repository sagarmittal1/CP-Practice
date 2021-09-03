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
        multiset <ll> st;

        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            st.insert(x);
        }

        ll ans = 0;
        while (k--) {
            auto it = st.end();
            it--;
            ll cnt = *it;
            ans += cnt;
            st.erase(it);
            st.insert(cnt / 2);
        }
        cout << ans << endl;
    }

    return 0;
}