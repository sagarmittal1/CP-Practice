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
    string s; cin >> s;
    bool check = true;
    int sum1 = 0, sum2 = 0;


    for (int i = 0; i < n; i++) {
        if (s[i] != '4' and s[i] != '7') {
            check = false;
            break;
        }
        int x = s[i] - '0';
        if (i < n / 2) {
            sum1 += x;
        } else {
            sum2 += x;
        }
    }

    // cout << sum1 << endl << sum2;

    if (check and sum1 == sum2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}