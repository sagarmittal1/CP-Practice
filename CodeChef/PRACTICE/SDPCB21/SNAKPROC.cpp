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
        string ans = "";

        for (int i = 0; i < n; i++) {
            if (s[i] != '.') {
                ans.pb(s[i]);
            }
        }
        bool chk = true;

        if (ans.size() % 2 != 0) {
            chk = false;
        } else {
            for (int i = 0 ; i < ans.size(); i += 2) {
                if (ans[i] == 'H' and ans[i + 1] == 'T') {

                } else {
                    chk = false;
                }
            }
        }

        if (chk) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }


    }

    return 0;
}