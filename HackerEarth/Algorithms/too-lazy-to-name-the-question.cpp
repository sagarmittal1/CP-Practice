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

    int a, b, c;
    cin >> a >> b >> c;
    if (b < a) swap(a, b);

    vector <int> v;

    int x = a;
    int t = 2000;

    while (t) {
        if (x % a == 0 or x % b == 0) {
            v.pb(x);
            t--;
        }
        x++;
    }
    int ans = v[c - 1];

    if (ans % a == 0 and ans % b == 0) {
        int lcm = (a * b) / (gcd(a, b));
        while (ans != 0) {
            cout << ans << " ";
            ans -= lcm;
        }
    } else if (ans % a == 0) {
        while (ans != 0) {
            cout << ans << " ";
            ans -= a;
        }
    } else {
        while (ans != 0) {
            cout << ans << " ";
            ans -= b;
        }
    }
    cout << 0 << endl;

    // cout << endl;
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << endl;
    // }

    return 0;
}