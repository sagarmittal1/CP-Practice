// This is a 1200 rating question 
// & I can't believe I solved it with just a easy approach

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

    ll n; cin >> n;
    int a[n + 1];

    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        a[x] = i;
    }

    ll sum = 0;

    for (int i = 1; i < n; i++) {
        sum += abs(a[i] - a[i + 1]);
    }

    cout << sum << endl;

    return 0;
}