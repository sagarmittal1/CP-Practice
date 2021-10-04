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

    int n = 8;
    int w = 0, b = 0;

    for (int i = 0; i < 8; i++) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '.') {
                if (isupper(s[i])) {
                    if (s[i] == 'Q') w += 9;
                    if (s[i] == 'R') w += 5;
                    if (s[i] == 'N') w += 3;
                    if (s[i] == 'B') w += 3;
                    if (s[i] == 'P') w += 1;
                } else {
                    if (s[i] == 'q') b += 9;
                    if (s[i] == 'r') b += 5;
                    if (s[i] == 'n') b += 3;
                    if (s[i] == 'b') b += 3;
                    if (s[i] == 'p') b += 1;
                }
            }
        }
    }

    if (w > b) {
        cout << "White" << endl;
    } else if (b > w) {
        cout << "Black" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}