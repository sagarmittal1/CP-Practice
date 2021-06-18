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

    int sum = 0, ze = 0;

    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        sum += x;
        if (x == 0) ze++;
    }

    if (sum % 5 == 0 and ze != 5) {
        cout << sum / 5 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}