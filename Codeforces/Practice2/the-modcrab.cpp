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

    int h1, a1, c1, h2, a2;
    cin >> h1 >> a1 >> c1 >> h2 >> a2;

    vi ans;

    while (h2 > 0) {
        if (h2 <= a1) {
            ans.pb(5);
            h2 -= a1;
            break;
        }
        if (h1 > a2) {
            h2 -= a1;
            h1 -= a2;
            ans.pb(5);
        } else {
            ans.pb(1);
            h1 += c1;
            h1 -= a2;
        }
    }

    cout << ans.size() << endl;
    for (auto i : ans) {
        if (i == 5) {
            cout << "STRIKE" << endl;
        } else {
            cout << "HEAL" << endl;
        }
    }


    return 0;
}