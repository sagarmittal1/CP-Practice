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

    int n, m;
    cin >> n >> m;
    int total = 0;

    while (n--) {
        int a[2 * m];
        for (int i = 0; i < 2 * m; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < 2 * m; i += 2) {
            if (a[i] == 1 or a[i + 1] == 1) {
                total++;
            }
        }
    }

    cout << total << endl;

    return 0;
}