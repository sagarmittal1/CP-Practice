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
    int a[5] = {};

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a[x]++;
    }

    int ans = a[4];
    ans += a[3];

    if (a[3] >= a[1]) {
        a[1] = 0;
    } else {
        a[1] -= a[3];
    }

    ans += a[2] / 2;

    if (a[2] % 2 != 0) {
        ans++;
        if (a[1] > 2) {
            a[1] -= 2;
        } else {
            a[1] = 0;
        }
    }

    if (a[1] > 0) {
        if (a[1] % 4 == 0) {
            ans += a[1] / 4;
        } else {
            ans += a[1] / 4 + 1;
        }
    }

    cout << ans << endl;

    return 0;
}