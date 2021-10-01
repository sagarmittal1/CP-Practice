// https://atcoder.jp/contests/abc219/tasks/abc219_c
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
string s[50005];
map<char, int> mp;
int main() {
    string x;
    cin >> x;
    for (int i = 0; i < 26; ++i) {
        mp[x[i]] = i;
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    sort(s, s + n, [](string &a, string &b) {
        int l1 = a.size();
        int l2 = b.size();
        for (int i = 0; i < min(l1, l2); ++i) {
            if (a[i] != b[i]) return mp[a[i]] < mp[b[i]];
        }
        return l1 < l2;
    });
 
    for (int i = 0; i < n; ++i) {
        cout << s[i] << endl;
    }
    return 0;
}
