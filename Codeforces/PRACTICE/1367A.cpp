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
        string s; cin >> s;
        string ans;
        ans.pb(s[0]);
        ans.pb(s[1]);
        for (int i = 2; i < s.size(); i += 2) {
            if (s[i] == s[i - 1]) {
                ans += s[i + 1];
            } else {
                ans += s[i - 1];
                ans += s[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}