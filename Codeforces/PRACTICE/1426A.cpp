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
        double n, x;
        cin >> n >> x;
        int ap = 1;
        if (n == 1 or n == 2) {
            ap = 1;
        } else {
            n -= 2;
            ap = ceil(n / x) + 1;
        }
        cout << ap << endl;
    }

    return 0;
}