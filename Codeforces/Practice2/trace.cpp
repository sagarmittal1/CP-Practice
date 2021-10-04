#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"
#define PI 3.141592653589793238462

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int n; cin >> n;
    double a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    double ans = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans += PI * (a[i] * a[i]);
        } else {
            ans -= PI * (a[i] * a[i]);
        }
    }

    printf("%.10lf", ans);

    return 0;
}