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

    int n; cin >> n;
    int a[n];
    set <int> st;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    sort(a, a + n);

    int ans = 0, sub = 0, x = a[0];

    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            sub++;
        } else {
            x = a[i];
            ans = max(ans, sub);
            sub = 1;
        }
    }
    ans = max(sub, ans);
    cout << ans << " " << st.size();

    return 0;
}