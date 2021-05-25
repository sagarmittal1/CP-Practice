#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
    fast;

    int n, k;
    cin >> n >> k;
    int joy = -1e9;

    while (n--) {
		int f, t;
        int x = 0;
        cin >> f >> t;
        if (t > k) {
            x = f - (t - k);
        } else {
            x = f;
        }
        if (x > joy) {
            joy = x;
        }
    }

    cout << joy << endl;

    return 0;
}