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

    ll t; cin >> t;

    while (t--) {
        int a[3], b[3];
        for (int i = 0; i < 3; i++) cin >> a[i];
        for (int i = 0; i < 3; i++) cin >> b[i];
        int x = 0, y = 0;

        for (int i = 0; i < 3; i++) {
            if (a[i] > b[i]) {
                x++;
            } else {
                y++;
            }
        }
        if (x > y) {
            cout << "A" << endl;
        } else {
            cout << "B" << endl;
        }
    }

    return 0;
}