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
        int n; cin >> n;
        vi v(n);

        for (int i = 0; i < n; i++) cin >> v[i];
        bool ans = true;

        if (n % 2 == 0) {
            ans = false;
        } else {
            int cnt = 1;
            for (int i = 0; i <= n / 2; i++) {
                if (v[i] == v[n - 1 - i] and v[i] == cnt) {
                    cnt++;
                } else {
                    ans = false;
                }
            }
        }
        if (ans) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }

    }

    return 0;
}