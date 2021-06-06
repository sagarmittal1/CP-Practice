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

    int a, b;
    cin >> a >> b;
    set <int> st;

    st.insert(a);
    st.insert(b);

    if (st.size() == 1) {
        cout << a << endl;
    } else {
        if (st.find(1) == st.end()) {
            cout << 1 << endl;
        } else if (st.find(2) == st.end()) {
            cout << 2 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}