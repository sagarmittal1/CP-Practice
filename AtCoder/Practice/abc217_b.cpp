#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    set <string> st = {"ABC", "ARC", "AGC", "AHC"};

    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        auto it = st.find(s);
        st.erase(it);
    }

    for (auto it : st) {
        cout << it << endl;
    }

    return 0;
}