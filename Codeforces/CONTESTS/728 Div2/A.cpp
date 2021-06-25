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
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
        } else {
            for (int i = 1; i <= n - 3; i += 2) {
                cout << i + 1 << " " << i << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}