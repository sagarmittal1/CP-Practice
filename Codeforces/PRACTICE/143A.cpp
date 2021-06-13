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

    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    for (int i = 0; i <= 9; i++) {
        int a, b, c, d;
        a = i;
        b = r1 - a;
        c = c1 - a;
        d = d1 - a;

        if (b + c == d2 and b + d == c2 and c + d == r2) {
            set <int> st;
            if (a != 0 and a <= 9) st.insert(a);
            if (b != 0 and b <= 9) st.insert(b);
            if (c != 0 and c <= 9) st.insert(c);
            if (d != 0 and d <= 9) st.insert(d);

            if (st.size() == 4) {
                cout << a << " " << b << endl;
                cout << c << " " << d << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;

    return 0;
}