// https://www.hackerearth.com/problem/algorithm/capitalbaazi/

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

    string s;

    while (cin >> s) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }

    return 0;
}