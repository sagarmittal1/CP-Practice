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
        int n, m;
        cin >> n >> m;
        set <int> st;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        for (int i = 0; i < m; i++) {
            int x; cin >> x;
            st.insert(x);
        }
        cout << n + m - st.size() << endl;
    }

    return 0;
}