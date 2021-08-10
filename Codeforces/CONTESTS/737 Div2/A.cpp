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

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        int maxi = -1e9;
        double avg = 0;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            maxi = max(x, maxi);
            avg += x;
        }
        avg -= maxi;

        double ans = maxi + avg / (n - 1);
        printf("%.9f\n", ans);
    }

    return 0;
}