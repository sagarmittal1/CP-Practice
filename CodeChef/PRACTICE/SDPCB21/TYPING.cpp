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
        map <string, int> mp;
        int ans = 0;

        while (n--) {
            string s; cin >> s;
            int tot = 0;
            if (mp.find(s) == mp.end()) {
                tot += 2;
                int xx;
                if (s[0] == 'd' or s[0] == 'f') {
                    xx = -1;
                } else {
                    xx = 1;
                }
                for (int i = 1; i < s.size(); i++) {
                    if (s[i] == 'd' or s[i] == 'f') {
                        if (xx == -1) {
                            tot += 4;
                        } else {
                            tot += 2;
                        }
                        xx = -1;
                    } else {
                        if (xx == 1) {
                            tot += 4;
                        } else {
                            tot += 2;
                        }
                        xx = 1;
                    }
                }
                ans += tot;
                mp[s] = tot;
            } else {
                auto it = mp.find(s);
                ans += (it->second) / 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}