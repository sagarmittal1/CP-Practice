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
        int n; cin >> n;
        int n3, n5, n7;
        bool chk = false;

        for (n3 = 0; n3 <= n / 3; n3++) {
            for (n5 = 0; n5 <= n / 5; n5++) {
                for (n7 = 0; n7 <= n / 7; n7++) {
                    if ((n3 * 3) + (n5 * 5) + (n7 * 7) == n) {
                        chk = true;
                        break;
                    }
                }
                if (chk) break;
            }
            if (chk) break;
        }

        if (chk) {
            cout << n3 << " " << n5 << " " << n7 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}