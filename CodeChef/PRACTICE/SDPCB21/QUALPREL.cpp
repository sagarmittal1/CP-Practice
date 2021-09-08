#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

bool cmp(int a, int b) {
    return a > b;
}

int main()
{
    fast;

    int t; cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vi v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(all(v), cmp);

        int x = v[k - 1];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] >= x) {
                ans++;
            } else {
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}