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

    int n; cin >> n;
    vector <pair<int, int>> v;

    for (int i = 1; i <=  n; i++) {
        int x; cin >> x;
        v.pb({x, i});
    }

    sort(all(v));

    for (int i = 0; i < n; i++) {
        cout << v[i].second << " ";
    }

    return 0;
}

////////////////////////////////////////////////

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

    int n; cin >> n;
    set <pair<int, int>> st;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        st.insert({x, i});
    }

    for (auto it : st) {
        cout << it.second << " ";
    }

    return 0;
}