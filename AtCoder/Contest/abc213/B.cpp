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
    vector <pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.pb({x, i + 1});
    }

    sort(all(v));
    reverse(all(v));
    cout << v[1].second << endl;

    return 0;
}