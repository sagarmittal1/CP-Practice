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

bool comparator(pair<int, string> a, pair <int, string> b) {
    if (a.first != b.first) {
        if (a.first > b.first) return true;
        return false;
    } else {
        if (a.second < b.second) return true;
        return false;
    }
}

int main()
{
    fast;

    ll n; cin >> n;
    vector <pair<int, string>> v;

    for (int i = 0; i < n; i++) {
        string s;
        ll x;
        cin >> s >> x;
        v.pb({x, s});
    }

    sort(all(v), comparator);

    for (auto it : v) {
        cout << it.second << " " << it.first << endl;
    }

    return 0;
}