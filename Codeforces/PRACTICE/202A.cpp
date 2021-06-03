#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
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
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    char ss = s[0];

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ss) {
            cout << s[i];
        } else {
            break;
        }
    }


    return 0;
}