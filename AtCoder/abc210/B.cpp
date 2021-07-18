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
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (i % 2 == 0) {
                cout << "Takahashi" << endl;
            } else {
                cout << "Aoki" << endl;
            }
            return 0;
        }
    }

    return 0;
}