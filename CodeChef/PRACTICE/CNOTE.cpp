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

    int t; cin >> t;

    while (t--) {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        int p[n], c[n];

        for (int i = 0; i < n; i++) {
            cin >> p[i] >> c[i];
        }

        if (y - x < 0) {
            bool check = false;
            for (int i = 0; i < n; i++) {
                if (p[i] >= abs(x - y) and c[i] <= k) {
                    check = true;
                    break;
                }
            }
            if (check) {
                cout << "LuckyChef" << endl;
            } else {
                cout << "UnluckyChef" << endl;
            }
        } else {
            cout << "UnluckyChef" << endl;
        }
    }

    return 0;
}