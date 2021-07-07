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

    string s; cin >> s;
    bool check = false;
    int n = s.size();

    for (int i = 0; i < n; i++) {
        int x = s[i] - '0';
        int y = s[n - 1] - '0';
        if (x % 2 == 0) {
            check = true;
            if (x < y) {
                swap(s[i], s[n - 1]);
                cout << s << endl;
                return 0;
            }
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        int x = s[i] - '0';
        int y = s[n - 1] - '0';
        if (x % 2 == 0 and x > y) {
            swap(s[i], s[n - 1]);
            cout << s << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}