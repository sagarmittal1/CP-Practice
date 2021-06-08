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

    for (int i = 0; i < n; i++) cin >> a[i];

    int m; cin >> m;
    int b[m];

    vi v;

    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] % a[i] == 0) {
                int ans = b[j] / a[i];
                v.pb(ans);
            }
        }
    }
    sort(all(v), greater<int>());

    int ans = 0, x = v[0];

    for (int i = 0; i < v.size(); i++) {
        if (x == v[i]) {
            ans++;
        } else {
            break;
        }
    }
    cout << ans << endl;

    return 0;
}