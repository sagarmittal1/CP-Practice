#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long
typedef vector<int> vi;

int32_t main()
{
    fast;

    int n; cin >> n;
    vi v(n);

    for (int i = 0 ; i < n; i++) {
        cin >> v[i];
    }

    int ans = n;
    int x = v[0];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            cnt++;
        } else {
            ans += (cnt * (cnt - 1)) / 2;
            cnt = 1;
            x = v[i];
        }
    }
    ans += (cnt * (cnt - 1)) / 2;
    cout << ans << endl;


    return 0;
}