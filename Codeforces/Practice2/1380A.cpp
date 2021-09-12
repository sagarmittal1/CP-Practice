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
        vi v(n);
        int a = -1;

        for (int i = 0; i < n; i++) cin >> v[i];

        for (int i = 0; i < n - 2; i++) {
            if (v[i] < v[i + 1] and v[i + 1] > v[i + 2]) {
                a = i + 1;
                break;
            }
        }
        if (a == -1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << a << " " << a + 1 << " " << a + 2 << endl;
        }
    }

    return 0;
}