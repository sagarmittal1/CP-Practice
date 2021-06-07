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

    int a, b;
    cin >> a >> b;

    int ans = 0;

    for (int i = 1; i <= 6; i++) {
        if (i > a and i > b) {
            ans++;
        } else if (i == max(a, b)) {
            ans++;
        } else {
            continue;
        }
    }

    if (ans == 0) {
        cout << "0/1";
    } else if (ans == 2) {
        cout << "1/3";
    } else if (ans == 3) {
        cout << "1/2";
    } else if (ans == 4) {
        cout << "2/3";
    } else if (ans == 6) {
        cout << "1/1";
    } else {
        cout << ans << "/6";
    }

    return 0;
}