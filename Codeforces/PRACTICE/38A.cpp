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
    int x[n + 1];

    for (int i = 1; i < n; i++) {
        cin >> x[i];
    }

    int a, b;
    cin >> a >> b;

    int sum = 0;

    for (int i = a; i < b; i++) sum += x[i];

    cout << sum << endl;

    return 0;
}