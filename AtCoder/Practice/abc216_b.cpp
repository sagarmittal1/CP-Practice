#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    int n; cin >> n;
    vector <pair<string, string>> v;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(all(v));

    string ans = "No";

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i].ff == v[j].ff and v[i].ss == v[j].ss) {
                cout << "Yes" << endl;
                return 0;
            } else {
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}

// another solution that was I wanted

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
    set <pair<string, string>> st;

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        st.insert({a, b});
    }

    if (st.size() == n) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }

    return 0;
}