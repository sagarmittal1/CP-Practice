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
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n, greater<int>());
        int ans = 0, x = sum / n;

        if (sum % n != 0) {
            ans = -1;
        } else if (a[0] == a[n - 1]) {
            ans = 0;
        } else if (n == 1) {
            ans = 0;
        } else {
            for (int i = 0; i < n; i++) {
                if (a[i] > x) {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}