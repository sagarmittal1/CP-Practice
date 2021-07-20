// that question was really fun like I get to find bug
// that was really frustating but enjoying

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

    int d, sum;
    cin >> d >> sum;
    int mini[d], maxi[d], a[d];
    int sumin = 0, sumax = 0;

    for (int i = 0; i < d; i++) {
        cin >> mini[i] >> maxi[i];
        a[i] = mini[i];
        sumin += mini[i];
        sumax += maxi[i];
    }

    if (sumin <= sum and sumax >= sum) {
        cout << "YES" << endl;
        sum -= sumin;
        int x = 0;
        while (sum > 0) {
            if (a[x] < maxi[x]) {
                int sx = maxi[x] - a[x];
                if (sum >= sx) {
                    a[x] += sx;
                    sum -= sx;
                    x++;
                } else {
                    a[x] += sum;
                    sum -= sx;
                }
            } else {
                x++;
            }
        }
        for (int i = 0; i < d; i++) {
            cout << a[i] << " ";
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}