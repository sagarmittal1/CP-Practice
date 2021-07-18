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
        string j, s;
        cin >> j >> s;
        ll ans = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int k = 0; k < j.size(); k++) {
                if (s[i] == j[k]) {
                    ans++;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}