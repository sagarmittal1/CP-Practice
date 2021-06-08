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

    ll n; cin >> n;
    vector <pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        v.pb({h, m});
    }

    int ans = 0, sub = 0;
    int x = v[0].first, y = v[0].second;

    for (int i = 0; i < v.size(); i++) {
        if (v[i].first == x and v[i].second == y) {
            sub++;
        } else {
            ans = max(ans, sub);
            x = v[i].first;
            y = v[i].second;
            sub = 1;
        }
    }
    ans = max(ans, sub);

    cout << ans << endl;

    return 0;
}