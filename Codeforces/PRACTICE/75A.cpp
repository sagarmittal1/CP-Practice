#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int a[3], nz[3];
    cin >> a[0] >> a[1];
    a[2] = a[0] + a[1];

    for (int i = 0; i < 3; i++) {
        string s = to_string(a[i]);
        string ss;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                ss.pb(s[i]);
            }
        }
        nz[i] = stoi(ss);
    }

    if (nz[2] == nz[0] + nz[1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}