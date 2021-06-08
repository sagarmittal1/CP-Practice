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

    ll n; cin >> n;
    if (n == 0) {
    	cout << 1 << endl;
        return 0;
    }
    n = n % 4;

    if (n == 1) {
        cout << 8;
    } else if (n == 2) {
        cout << 4;
    } else if (n == 3) {
        cout << 2;
    } else {
        cout << 6;
    }

    return 0;
}