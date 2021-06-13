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

    int n; cin >> n;
    string a[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    int ans = 0;

    while (n--) {
        string s; cin >> s;
        for (int i = 0; i < 11; i++) {
            if (s == a[i]) {
                ans++;
            }
        }
        if (s[0] >= '0' and s[0] <= '9') {
            int x = stoi(s);
            if (x < 18) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}