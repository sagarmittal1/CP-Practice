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

    int n = 3;
    int a[n];
    string vo = "aeiou";

    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        int x = 0;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < vo.size(); j++) {
                if (s[i] == vo[j]) {
                    x++;
                }
            }
        }
        a[i] = x;
    }

    if (a[0] == 5 and a[1] == 7 and a[2] == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}