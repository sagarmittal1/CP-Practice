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
    int total = 1.08 * n;
    // cout << total;

    if (total == 206) {
        cout << "so-so";
    } else if (total < 206) {
        cout << "Yay!";
    } else {
        cout << ":(";
    }

    return 0;
}