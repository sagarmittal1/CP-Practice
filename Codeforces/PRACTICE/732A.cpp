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

    int k, r;
    cin >> k >> r;

    for (int i = 1; i < 100000; i++) {
        if ((i * k - r) % 10 == 0 or (i * k) % 10 == 0) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}