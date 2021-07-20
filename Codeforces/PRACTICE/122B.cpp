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

    string s; cin >> s;
    int n4 = 0, n7 = 0;

    for (int i = 0; i < s.size(); i++) {
        int x = s[i] - '0';
        if (x == 4) n4++;
        if (x == 7) n7++;
    }

    if (n4 == 0 and n7 == 0) {
        cout << -1 << endl;
    } else {
        if (n4 == n7) {
            cout << 4 << endl;
        } else if (n7 > n4) {
            cout << 7 << endl;
        } else {
            cout << 4 << endl;
        }
    }

    return 0;
}