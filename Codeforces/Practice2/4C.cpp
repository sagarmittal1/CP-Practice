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
    unordered_map <string, int> mp;

    while (n--) {
        string s; cin >> s;
        auto it = mp.find(s);
        bool check = true;

        if (it == mp.end()) {
            mp[s];
        } else {
            mp[s]++;
            cout << it->first << it->second << endl;
            check = false;
        }
        if (check) cout << "OK" << endl;
    }

    return 0;
}