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
        int a, b;
        cin >> a >> b;
        int mini = min(a, b);
        int maxi = max(a, b);
        if (2 * mini >= maxi) {
            mini *= 2;
            cout << mini*mini << endl;
        } else {
            cout << maxi*maxi << endl;
        }
    }

    return 0;
}