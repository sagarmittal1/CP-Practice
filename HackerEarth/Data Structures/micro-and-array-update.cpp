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
        int n, k;
        cin >> n >> k;
        int mini = 1e9;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            mini = min(mini, x);
        }
        if (mini >= k) {
            cout << 0 << endl;
        } else {
            cout << k - mini << endl;
        }
    }

    return 0;
}