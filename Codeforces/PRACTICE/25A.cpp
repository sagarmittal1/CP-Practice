#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
    fast;

    int n; cin >> n;
    int a[n];
    int e = 0, o = 0;
    int ie = -1, io = -1;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            e++;
            ie = i + 1;
        } else {
            o++;
            io = i + 1;
        }
    }

    if (o == 1) {
        cout << io << endl;
    } else {
        cout << ie << endl;
    }

    return 0;
}