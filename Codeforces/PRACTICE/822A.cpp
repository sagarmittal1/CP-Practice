#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long int lli;
typedef vector<int> vi;


int main()
{
    fast;

    int a, b;
    cin >> a >> b;

    int mini = min(a, b);
    int ans = 1;
    for (int i = 1; i <= mini; i++) {
        ans *= i;
    }
    cout << ans << endl;

    return 0;
}