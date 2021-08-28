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

    while (t--) {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if (a > b) swap(a, b);
        if (a1 > b1) swap(a1, b1);
        if (a2 > b2) swap(a2, b2);

        if (a == a1 and b == b1) {
            cout << 1 << endl;
        } else if (a == a2 and b == b2) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }

    }

    return 0;
}