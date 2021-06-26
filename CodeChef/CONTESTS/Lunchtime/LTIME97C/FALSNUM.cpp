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

    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        if (s[0] == '1') {
            cout << s[0] << "0";
            for (int i = 1; i < s.size(); i++) {
                cout << s[i];
            }
        } else {
            cout << "1" << s;
        }
        cout << endl;
    }

    return 0;
}