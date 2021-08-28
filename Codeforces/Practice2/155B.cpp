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
    vector <pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.pb({b, a});
    }

    sort(all(v));
    reverse(all(v));

    int cnt = 1;
    int x = 0;
    int ans = 0;

    while (cnt != 0 and x < n) {
        cnt += v[x].first - 1;
        ans += v[x].second;
        x++;
    }

    cout << ans << endl;

    return 0;
}