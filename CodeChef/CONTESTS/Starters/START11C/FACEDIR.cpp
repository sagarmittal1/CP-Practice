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
        n %= 4;

        if (n == 0) {
            cout << "North" << endl;
        } else if (n == 1) {
            cout << "East" << endl;
        } else if (n ==  2) {
            cout << "South" << endl;
        } else {
            cout << "West" << endl;
        }
    }

    return 0;
}