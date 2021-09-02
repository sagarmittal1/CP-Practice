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

    string s; cin >> s;
    int n = s.size();
    int y = s[n - 1] - '0';
    s.ppb(); s.ppb();

    if (0 <= y and y <= 2) {
        s.pb('-');
    } else if (7 <= y and y <= 9) {
        s.pb('+');
    } else {

    }
    cout << s << endl;

    return 0;
}