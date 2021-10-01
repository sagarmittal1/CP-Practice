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
        int n, s;
        cin >> n >> s;

        if (n < s) {
            int t1 = s - n;
            int t2 = n;
            cout << abs(t1 - t2) << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}