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

    if (n % 2 != 0) {
        cout << 0 << endl;
    } else {
        if (n % 4 == 0) {
            cout << n / 4 - 1 << endl;
        } else {
            cout << n / 4 << endl;
        }

    }

    return 0;
}