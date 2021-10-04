#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long

typedef long long ll;
typedef vector<int> vi;

int32_t main()
{
    fast;

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        deque <int> dq;

        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (dq.size() == 0) {
                dq.push_back(x);
            } else {
                auto it1 = dq.begin();
                auto it2 = --dq.end();
                if (x < *it1) {
                    dq.push_front(x);
                } else {
                    dq.push_back(x);
                }
            }
        }

        for (auto it : dq) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}