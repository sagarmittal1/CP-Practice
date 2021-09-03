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
        int n, k, l;
        cin >> n >> k >> l;
        int a[n];
        int maxi = -1e6;
        string ans;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            maxi = max(a[i], maxi);
        }

        if (a[n - 1] == maxi) {
            int cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == maxi)cnt++;
            }
            if (cnt == 1) {
                ans = "Yes";
            } else {
                if (maxi - a[n - 1] < k * (l - 1)) {
                    ans = "Yes";
                } else {
                    ans = "No";
                }
            }
        } else {
            if (k <= 0) {
                ans = "No";
            } else {
                if (maxi - a[n - 1] < k * (l - 1)) {
                    ans = "Yes";
                } else {
                    ans = "No";
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}