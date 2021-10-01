#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long

// typedef long long ll;
typedef vector<int> vi;

int32_t main()
{
    fast;

    int t; cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        int tot = (n * (n + 1)) / 2;
        int x = tot - s;

        if (x <= 0) {
            cout << -1 << endl;
        } else if (x <= n) {
            cout << x << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}