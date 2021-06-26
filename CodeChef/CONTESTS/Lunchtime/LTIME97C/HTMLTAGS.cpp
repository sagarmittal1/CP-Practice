// this questions taught me much as I found bugs that are crucial
// After getting 4 wrong submissions ://

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

    int t; cin >> t;


    while (t--) {
        string s; cin >> s;
        int n = s.size();
        bool check = true;

        if (s[0] != '<' or s[1] != '/' or s[n - 1] != '>') {
            check = false;
        } else {
            for (int i = 2; i < n - 1; i++) {
                if (isalpha(s[i])) {
                    if (isupper(s[i])) {
                        check = false;
                        break;
                    }
                } else {
                    if (isdigit(s[i])) {
                        continue;
                    } else {
                        check = false;
                    }
                }

            }
        }
        if (check and s.size() > 3) {
            cout << "Success" << endl;
        } else {
            cout << "Error" << endl;
        }
    }

    return 0;
}