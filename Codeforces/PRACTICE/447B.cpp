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

    string s; cin >> s;
    int k; cin >> k;
    int a[26];
    int maxi = 0;

    for (int i = 0; i < 26; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }
    ll sum = 0;

    for (int i = 0; i < s.size(); i++) {
        int y = s[i] - 'a';
        sum += (i + 1) * a[y];
    }

    int x = s.size() + 1;
    while (k--) {
        sum += x * maxi;
        x++;
    }

    cout << sum << endl;


    return 0;
}