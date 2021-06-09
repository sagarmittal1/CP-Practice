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

    int n, m;
    cin >> n >> m;

    while (m > 0) {
        for (int i = 1; i <= n; i++) {
            if (m >= i) {
                m -= i;
            } else {
                cout << m << endl;
                return 0;
            }
        }
    }

    cout << m << endl;

    return 0;
}