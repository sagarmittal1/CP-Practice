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

    ll a, b, s;
    cin >> a >> b >> s;

    ll dis = abs(a) + abs(b);

    if (dis == s) {
        cout << "Yes";
    } else if ((s - dis) % 2 == 0 and s > dis) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}