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

    double long n, m, a;
    cin >> n >> m >> a;

    ll ans = ceil(n / a) * ceil(m / a);
    cout << ans << endl;

    return 0;
}