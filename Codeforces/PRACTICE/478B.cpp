// this questions uses maths & 
// this is just hilarious when you see code
// finding max was super easy but min was bit of tough

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

    ll n, m;
    cin >> n >> m;

    ll maxi, mini = 0;

    ll x = n - (m - 1);
    maxi = (x) * (x - 1) / 2;

    if (m == 1) {
        mini = maxi;
    } else {
        if (n % m == 0) {
            ll x1 = n / m;
            mini = ((x1) * (x1 - 1) / 2) * m;
        } else {
            ll t = n / m;
            ll x1 = n - (n / m) * m;
            mini += (x1) * (t * (t + 1) / 2);
            mini += (m - x1) * (t * (t - 1) / 2);
        }
    }

    cout << mini << " " << maxi << endl;

    return 0;
}