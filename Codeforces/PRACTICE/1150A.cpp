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

    int n, m, r, ini;
    cin >> n >> m >> r;
    ini = r;
    int mini = 10001;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mini = min(x, mini);
    }
    int share = r / mini;
    r -= share * mini;

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        maxi = max(x, maxi);
    }

    r += share * maxi;

    if (r > ini) {
        cout << r << endl;
    } else {
        cout << ini << endl;
    }

    return 0;
}