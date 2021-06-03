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

    int k; cin >> k;
    char a[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    k *= 2;
    string ans = "YES";

    for (char z = '1'; z <= '9'; z++) {
        int x = k;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (a[i][j] == z) {
                    if (x == 0) {
                        ans = "NO";
                        break;
                    } else {
                        a[i][j] = '#';
                        x--;
                    }
                }
            }
        }
    }

    cout << ans << endl;


    return 0;
}