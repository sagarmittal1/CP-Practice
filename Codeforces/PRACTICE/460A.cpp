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
    int ans = 0;

    for (int i = 1; i < 200; i++) {
        if (n > 0) {
            ans++;
            n--;
        } else {
            break;
        }
        if (i % m == 0) {
            n++;
        }
    }

    cout << ans << endl;

    return 0;
}