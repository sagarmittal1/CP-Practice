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

    ll n; cin >> n;
    ll police = 0, crime = 0;
    ll untreat = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == -1) {
            if (police > 0) {
                police--;
            } else {
                untreat++;
            }
        } else {
            police += x;
        }
    }

    cout << untreat << endl;

    return 0;
}