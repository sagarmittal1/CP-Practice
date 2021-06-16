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

    while (n--) {
        int x; cin >> x;
        string s = to_string(x);

        int rem = x % 10;
        int ans = (10) * (rem - 1);
        if (s.size() == 1) {
            ans += 1;
        } else if (s.size() == 2) {
            ans += 1 + 2;
        } else if (s.size() == 3) {
            ans += 1 + 2 + 3;
        } else {
            ans += 1 + 2 + 3 + 4;
        }
        cout << ans << endl;
    }

    return 0;
}