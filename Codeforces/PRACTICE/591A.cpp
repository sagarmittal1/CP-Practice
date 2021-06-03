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

    float l, p, q;
    cin >> l >> p >> q;

    float ans = p * (l / (p + q));
    cout << ans << endl;

    return 0;
}