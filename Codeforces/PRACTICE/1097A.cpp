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

    string t; cin >> t;
    string ans = "NO";

    for (int z = 0; z < 5; z++) {
        string s; cin >> s;
        if (s[0] == t[0]) {
            cout << "YES" << endl;
            return 0;
        }
        if (s[1] == t[1]) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << ans << endl;

    return 0;
}