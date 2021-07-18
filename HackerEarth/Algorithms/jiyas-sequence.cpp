// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

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

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        ll sum = 1;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            sum *= x;
        }
        int ans = sum % 10;
        if (ans == 2 or ans == 3 or ans == 5) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}