#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
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
    vector <ll> odd;
    vector <ll> even;

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        if (x % 2 == 0) {
            even.pb(x);
        } else {
            odd.pb(x);
        }
    }
    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());

    ll sum = 0;

    if (odd.size() % 2 == 0) {
        for (int i = 0; i < odd.size(); i++) {
            sum += odd[i];
        }
    } else {
        for (int i = 0; i < odd.size() - 1; i++) {
            sum += odd[i];
        }
    }

    for (int i = 0; i < even.size(); i++) {
        sum += even[i];
    }

    cout << sum;

    return 0;
}