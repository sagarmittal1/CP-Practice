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
        string s; cin >> s;

        vector <char> v;
        v.pb(s[0]);
        char current = s[0];
        string ans = "YES";

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                continue;
            } else {
                bool check = false;
                for (int j = 0; j < v.size(); j++) {
                    if (v[j] == s[i]) {
                        check = true;
                        break;
                    }
                }
                if (check) {
                    ans = "NO";
                    break;
                } else {
                    current = s[i];
                    v.pb(s[i]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}