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

    ll k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    ll ans = 0;

    ll x = min(k2, min(k5, k6));
    ans += 256 * x;
    k2 -= x;
    ans += 32 * (min(k2, k3));
    cout << ans << endl;

    return 0;
}