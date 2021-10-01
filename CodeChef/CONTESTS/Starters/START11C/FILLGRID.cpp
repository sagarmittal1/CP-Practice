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

        if (n % 2 == 0) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << -1 << " ";
                }
                cout << endl;
            }
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) {
                        cout << -1 << " ";
                    } else {
                        cout << 1 << " ";
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}