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
        string s; cin >> s;
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') {
                ans.pb('D');
            } else if (s[i] == 'D') {
                ans.pb('U');
            } else {
                ans.pb(s[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}