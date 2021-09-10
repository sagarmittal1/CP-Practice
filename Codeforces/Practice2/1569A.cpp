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
        string s; cin >> s;
        bool chk = false;
        for (int i = 0; i < n; i++) {
            int a = 0, b = 0;
            for (int j = i; j < n; j++) {
                if (s[j] == 'a') {
                    a++;
                } else {
                    b++;
                }
                if (a == b) {
                    cout << i + 1 << " " << j + 1 << endl;
                    chk = true;
                    break;
                }
                if (chk) break;
            }
        }
        if (!chk) cout << "-1 -1" << endl;
    }

    return 0;
}