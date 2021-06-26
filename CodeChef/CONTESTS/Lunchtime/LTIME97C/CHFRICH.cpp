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
        int a, b, x;
        cin >> a >> b >> x;
        int ans = 0;
        while (a < b) {
            a += x;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}