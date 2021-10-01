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

    int n, m;
    cin >> n >> m;
    vector <pair<int, pair<int, int> > > v;
    int suma = 0, sumb = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.pb({a - b, {a, b}});
        suma += a;
        sumb += b;
    }

    bool chk = true;
    if (sumb > m) {
        cout << -1 << endl;
        return 0;
    }

    if (sumb == m) {
        cout << n << endl;
        return 0;
    }

    sort(all(v));
    reverse(all(v));

    int ans = 0;
    int x = 0;

    while (suma > m) {
        suma -= v[x].second.first;
        suma += v[x].second.second;
        x++;
        ans++;
    }

    cout << ans << endl;


    return 0;
}