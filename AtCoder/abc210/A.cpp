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

    int n, a, x, y;
    cin >> n >> a >> x >> y;

    int ans = 0;

    if (n > a) {
        ans = a * x + (n - a) * y;
    } else {
        ans = n * x;
    }
    cout << ans << endl;

    return 0;
}