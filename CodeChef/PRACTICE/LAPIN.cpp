#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
    fast;

    int t; cin >> t;

    while (t--) {
        string s; cin >> s;
        int n = s.size();
        string s1, s2;
        int mid = n / 2 + ((n % 2 == 0) ? 0 : 1);
        s1 = s.substr(0, n / 2);
        s2 = s.substr(mid, n / 2);
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if (s1 == s2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}