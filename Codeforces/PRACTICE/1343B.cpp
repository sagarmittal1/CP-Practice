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

        if ((n / 2) % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            int sum = 0;
            for (int i = 1; i <= n / 2; i++) {
                cout << 2 * i << " ";
                sum += 2 * i;
            }
            for (int i = 1; i < n / 2; i++) {
                cout << (2 * i) - 1 << " ";
                sum -= (2 * i) - 1;
            }
            cout << sum;
            cout << endl;
        }
    }

    return 0;
}