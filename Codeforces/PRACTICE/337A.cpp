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

    int n, m;
    cin >> n >> m;
    int a[m];

    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a, a + m);
    int ans = 10001;

    // for (int i = 0; i < m; i++) {
    //     cout << a[i] << endl;
    // }

    for (int i = 0; i <= m - n; i++) {
        int maxi = a[i + n - 1];
        int mini = a[i];
        ans = min(ans, maxi - mini);
    }
    cout << ans << endl;

    return 0;
}