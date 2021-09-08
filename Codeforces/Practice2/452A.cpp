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
    vector <string> v = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    vector <pair<string, bool>> ans;

    for (int i = 0; i < v.size(); i++) {
        if (v[i].size() == n) {
            ans.pb({v[i], true});
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '.') {
            for (int j = 0; j < ans.size(); j++) {
                if (s[i] != ans[j].first[i]) {
                    ans[j].second = false;
                }
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        if (ans[i].second == true) {
            cout << ans[i].first << endl;
        }
    }


    return 0;
}