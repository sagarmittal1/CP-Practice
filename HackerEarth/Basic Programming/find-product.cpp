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
    ll p = 1;
    ll f = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        p *= x;
        p %= f;
    }
    cout << p << endl;

    return 0;
}