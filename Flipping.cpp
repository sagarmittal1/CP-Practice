#include<bits/stdc++.h>
using namespace std;


#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(), (x).end()
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef unsigned long long ull;
typedef long double lld;
typedef vector<int> vi;
typedef long long ll;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


int main() {

#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    fast;

    cin >> n;
    while (n--)
        cin >> a, c += a, cp += 1 - a * 2, r = max(r, cp - mem), mem = min(cp, mem);
    cout << r + c;


    return 0;
}