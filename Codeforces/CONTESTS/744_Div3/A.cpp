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
        string s; cin >> s;
        int a = 0, b = 0, c = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') a++;
            if (s[i] == 'B') b++;
            if (s[i] == 'C') c++;
        }
        // cout << a << " " << b << " " << c << endl;
        if (b == a + c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}