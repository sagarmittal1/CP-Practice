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

    int n, q;
    cin >> n >> q;
    string s; cin >> s;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        int x = s[i] - 'a';
        x++;
        a[i] = x;
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }

    // for (int i = 0; i < n; i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // for (int i = 0; i < n; i++) {
    //     cout << b[i] << " ";
    // }
    // cout << endl;


    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        ll sum = 0;
        if (l == 0) {
            sum = b[r];
        } else {
            sum = b[r] - b[l - 1];
        }
        cout << sum << endl;
    }

    return 0;
}