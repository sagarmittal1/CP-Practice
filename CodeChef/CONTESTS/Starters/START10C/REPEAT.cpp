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
        int n, k, s;
        cin >> n >> k >> s;

        int tot = n + k - 1;
        int sum = n * n;
        int ans = abs(s - sum) / (tot - n);
        cout << ans << endl;
    }

    return 0;
}