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

    ll n; cin >> n;
    string ans = "";

    while (n != 0) {
        if (n % 2 == 0) {
            n /= 2;
            ans.pb('B');
        } else {
            n--;
            ans.pb('A');
        }
    }
    reverse(all(ans));
    cout << ans << endl;

    return 0;
}