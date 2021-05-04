#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    IOS;

    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = 5 - a[i];
    }

    sort(a, a + n);

    int ans = 0;

    for (int i = 0; i < n - 2; i++) {
        if (a[i] >= k and a[i + 1] >= k and a[i + 2] >= k) {
            ans++;
            i += 2;
        }
    }

    cout << ans;

    return 0;
}