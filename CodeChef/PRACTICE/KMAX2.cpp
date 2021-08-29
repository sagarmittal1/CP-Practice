// this is the question I tried most in codechef
// after that I know that was quite easy

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

    int t; cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector <int> v(n);
        int maxi = -1e6;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            maxi = max(v[i], maxi);
        }
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (v[i] == maxi and i >= k - 1) {
                ans += n - i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}