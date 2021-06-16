// this question uses dfs and similar but 
// by seeing carefully it can be solved using implemenation

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

    ll n, t; cin >> n >> t;
    int a[n];

    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }
    int pos = 1, i = 1;

    while (pos != t) {
        pos += a[i];
        i = pos;
        if (pos > t) {
            break;
        }
    }
    if (pos == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}