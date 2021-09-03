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
        ll n, m;
        cin >> n >> m;
        unordered_set <ll> st;

        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            st.insert(x);
        }
        for (int i = 0; i < m; i++) {
            ll x; cin >> x;
            auto it = st.find(x);
            if (it == st.end()) {
                cout << "NO" << endl;
                st.insert(x);
            } else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}