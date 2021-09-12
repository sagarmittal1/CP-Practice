#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int n2 = 0;
        bool chk = true;
        char a[n][n];

        for (auto it : s) if (it == '2') n2++;
        if (n2 == 1 or n2 == 2) chk = false;

        if (chk) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    a[i][j] = '=';
                }
            }

            for (int i = 0; i < n; i++) {
                if (s[i] == '2') {
                    for (int j = i + 1; j < n + i; j++) {
                        if (s[j % n] == '2') {
                            a[i][j % n] = '+';
                            a[j % n][i] = '-';
                            break;
                        }
                    }
                }
            }
        }

        if (chk) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i == j) a[i][j] = 'X';
                    cout << a[i][j];
                }
                cout << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}