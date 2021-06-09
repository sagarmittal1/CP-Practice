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
        int n; cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        bool check = true;

        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i + 1] - a[i]) > 1) {
                check = false;
                break;
            }
        }

        if (check) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}