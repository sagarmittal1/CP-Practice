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

    int n, c;
    cin >> n >> c;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0;

    for (int i = 0; i < n - 1; i++) {
        int x = a[i] - a[i + 1] - c;
        ans = max(ans, x);
    }

    cout << ans << endl;

    return 0;
}