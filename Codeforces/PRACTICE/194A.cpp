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

    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++) {
        a[i] = 2;
        k -= 2;
    }

    int x = 0;
    while (k != 0) {
        a[x] += 1;
        k--;
        x++; x %= n;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}