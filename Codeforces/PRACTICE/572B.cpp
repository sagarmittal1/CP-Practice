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

    int na, nb;
    cin >> na >> nb;
    int k, m;
    cin >> k >> m;
    int a[na], b[nb];

    for (int i = 0; i < na; i++) cin >> a[i];
    for (int i = 0; i < nb; i++) cin >> b[i];

    if (a[k - 1] < b[nb - m]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}