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
        int n; cin >> n;

        vi odd;
        vi even;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x % 2 == 0) {
                even.pb(x);
            } else {
                odd.pb(x);
            }
        }

        int o = odd.size();
        int e = n - o;

        ll sum = e * o + (e * (e - 1) / 2);

        for (int i = 0; i < o; i++) {
            for (int j = i + 1; j < o; j++) {
                if (__gcd(odd[i], 2 * odd[j]) > 1) {
                    sum++;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}