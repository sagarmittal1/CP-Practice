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
        double a, b;
        cin >> a >> b;
        int ans = 0;

        if (a == b) {
            ans = 0;
        } else {
            ans = ceil(abs(a - b) / 10);
        }
        cout << ans << endl;
    }

    return 0;
}