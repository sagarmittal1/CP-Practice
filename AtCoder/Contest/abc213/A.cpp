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

    int a, b;
    cin >> a >> b;

    for (int i = 0; i <= 255; i++) {
        if ((a ^ i) == b) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}