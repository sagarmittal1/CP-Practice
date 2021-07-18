// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/

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
    int x = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
                x -= s[i];
            } else {
                s[i] = toupper(s[i]);
                x += s[i];
            }
        }
    }

    x = abs(x);
    bool check = true;

    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            check = false;
            break;
        }
    }
    // cout << x << endl;

    if (check) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}