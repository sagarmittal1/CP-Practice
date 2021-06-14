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
    int mi = 0, ch = 0;

    while (t--) {
        int m, c;
        cin >> m >> c;
        if (m > c) {
            mi++;
        } else if (c > m) {
            ch++;
        } else {
            continue;
        }
    }

    if (mi > ch) {
        cout << "Mishka" << endl;
    } else if (ch > mi) {
        cout << "Chris" << endl;
    } else {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}