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

    int n; cin >> n;
    char a[n][n];
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0) {
                    a[i][j] = 'C';
                    ans++;
                } else {
                    a[i][j] = '.';
                }
            }
        } else {
            for (int j = 0; j < n; j++) {
                if (j % 2 == 0) {
                    a[i][j] = '.';
                } else {
                    a[i][j] = 'C';
                    ans++;
                }
            }
        }
    }


    cout << ans << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}