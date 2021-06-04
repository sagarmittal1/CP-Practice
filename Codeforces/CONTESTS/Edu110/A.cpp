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
        int n = 4;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int max1 = max(a[0], a[1]);
        int max2 = max(a[2], a[3]);

        sort(a, a + n);

        if (max1 == a[2] and max2 == a[3]) {
            cout << "YES" << endl;
        } else if (max1 == a[3] and max2 == a[2]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}