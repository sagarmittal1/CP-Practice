// upsolve question don't know why I not get it

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
        int n; cin >> n;
        vi v;
        int maxi = 0, mini = 1001;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.pb(x);
            maxi = max(maxi, x);
            mini = min(mini, x);
        }

        int lmax, lmin;
        for (int i = 0; i < n; i++) {
            if (v[i] == maxi) {
                lmax = i + 1;
            }
            if (v[i] == mini) {
                lmin = i + 1;;
            }
        }
        int rmax = n - lmax + 1;
        int rmin = n - lmin + 1;
        int ans1 = min(max(lmax, lmin), max(rmax, rmin));
        int ans2 = min(lmax + rmin, lmin + rmax);
        int ans = min(ans1, ans2);
        cout << ans << endl;
    }

    return 0;
}