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

    int n; cin >> n;
    int a[n];
    ll ans = 0;

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            ans += a[i];
        } else {
            if (a[i] >= a[i - 1]) {
                ans++;
                ans += a[i] - a[i - 1];
            } else {
                ans += abs(a[i] - a[i - 1]) + 1;
            }
        }
    }
    ans += n;

    cout << ans << endl;

    return 0;
}