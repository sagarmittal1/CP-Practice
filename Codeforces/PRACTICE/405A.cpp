// it is beautiful to see that sorting 

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

    int n; cin >> n;
    vi v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.pb(x);
    }
    sort(all(v));

    for (auto it : v) {
        cout << it << " ";
    }

    return 0;
}