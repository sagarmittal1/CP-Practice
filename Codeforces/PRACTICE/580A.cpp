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
    ll a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ini = a[0];
    int ans = 0, sub = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= ini) {
            ini = a[i];
            sub++;
        } else {
            ini = a[i];
            ans = max(ans, sub);
            sub = 1;
        }
    }
    ans = max(ans, sub);
    cout << ans << endl;

    return 0;
}