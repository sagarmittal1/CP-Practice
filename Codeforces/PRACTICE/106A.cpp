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

    char t; cin >> t;
    string c1, c2;
    char pack[9] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    cin >> c1 >> c2;

    string ans;

    if (c1[1] == t and c2[1] != t) {
        ans = "YES";
    } else if (c1[1] == c2[1]) {
        int x1, x2;
        for (int i = 0; i < 9; i++) {
            if (pack[i] == c1[0]) {
                x1 = i;
            }
        }
        for (int i = 0; i < 9; i++) {
            if (pack[i] == c2[0]) {
                x2 = i;
            }
        }
        if (x1 > x2) {
            ans = "YES";
        } else {
            ans = "NO";
        }
    } else {
        ans = "NO";
    }

    cout << ans << endl;

    return 0;
}