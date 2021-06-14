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
    string ans = "#Black&White";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c; cin >> c;
            if (c == 'C' or c == 'M' or c == 'Y') {
                ans = "#Color";
                break;
            }
        }
    }

    cout << ans << endl;

    return 0;
}