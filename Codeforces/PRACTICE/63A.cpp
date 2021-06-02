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

    int n; cin >> n;
    vector <string> rat;
    vector <string> chwo;
    vector <string> man;

    string cap;

    while (n--) {
        string a, b;
        cin >> a >> b;
        if (b == "rat") {
            rat.pb(a);
        } else if (b == "woman" or b == "child") {
            chwo.pb(a);
        } else if (b == "man") {
            man.pb(a);
        } else {
            cap = a;
        }
    }

    for (auto it : rat) {
        cout << it << endl;
    }
    for (auto it : chwo) {
        cout << it << endl;
    }
    for (auto it : man) {
        cout << it << endl;
    }
    cout << cap << endl;

    return 0;
}