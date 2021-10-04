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

    string s1, s2;
    cin >> s1 >> s2;
    int a[26] = {};
    int b[26] = {};

    for (int i = 0; i < s1.size(); i++) {
        int x = s1[i] - 'a';
        a[x]++;
    }

    for (int i = 0; i < s2.size(); i++) {
        b[s2[i] - 'a']++;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        if (b[i] > 0 and a[i] == 0) {
            cout << -1 << endl;
            return 0;
        }
        if (a[i] >= b[i]) {
            ans += b[i];
        } else {
            ans += a[i];
        }
    }

    cout << ans << endl;

    return 0;
}