#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
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
        int n, k;
        cin >> n >> k;
        vector <pair<int, int>> v;

        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            v.pb({x, y});
        }

        int ans = -1;

        for (int i = 0; i < v.size(); i++) {
            int tot = 0;
            for (int j = 0; j < v.size(); j++) {
                int x = abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second);
                if (x <= k) {
                    tot++;
                }
            }
            if (tot == n) {
                ans = 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}