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

    int n = 4;
    ll a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2];

    return 0;
}