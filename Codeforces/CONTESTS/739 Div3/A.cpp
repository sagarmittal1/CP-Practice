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

    int t; cin >> t;

    vi v;
    v.push_back(0);

    for (int i = 1; i < 5000; i++) {
        if (i % 3 == 0 or i % 10 == 3) {

        } else {
            v.pb(i);
        }
    }

    while (t--) {
        int k; cin >> k;
        cout << v[k] << endl;
    }

    return 0;
}