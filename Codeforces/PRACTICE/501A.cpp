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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll misha = max((3 * a) / 10, a - (a / 250 * c));
    ll vasya = max((3 * b) / 10, b - (b / 250 * d));

    if (misha > vasya) {
        cout << "Misha" << endl;
    } else if (vasya > misha) {
        cout << "Vasya" << endl;
    } else {
        cout << "Tie" << endl;
    }


    return 0;
}