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

    int n; cin >> n;
    set <int> st;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }

    bool chk = true;
    int ans = 0;

    if (st.size() > 3) {
        chk = false;
    }

    if (st.size() == 3) {
        int a[3];
        int x = 0;
        for (auto it : st) {
            a[x] = it;
            x++;
        }
        if (a[1] * 2 == a[0] + a[2]) {
            ans = a[1] - a[0];
        } else {
            chk = false;
        }
    }

    if (st.size() == 2) {
        int x = *st.begin();
        int y = *--st.end();
        if ((y - x) % 2 == 0) {
            ans = (y - x) / 2;
        } else {
            ans = (y - x);
        }
    }

    if (chk) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}