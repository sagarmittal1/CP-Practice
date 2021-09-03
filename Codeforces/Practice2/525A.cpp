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

    int n; cin >> n;
    string s; cin >> s;
    map <char, int> mp;
    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            mp[s[i]]++;
        } else {
            s[i] = tolower(s[i]);
            auto it = mp.find(s[i]);
            if (it->second == 0 or it == mp.end()) {
                ans++;
            } else {
                it->second--;
            }
        }
    }
    cout << ans << endl;

    return 0;
}