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

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int main() {

#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    fast;

    int n; cin >> n;
    set <int> st;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);
    }

    bool chk = true;
    int ans = 0;

    if (st.size() > 3) {
        chk = false;
    }

    if (st.size() == 3) {
        int a[3];
        int x = 0;
        for (auto it : st) {
            a[x] = it;
            x++;
        }
        if (a[1] * 2 == a[0] + a[2]) {
            ans = a[1] - a[0];
        } else {
            chk = false;
        }
    }

    if (st.size() == 2) {
        int x = *st.begin();
        int y = *--st.end();
        if ((y - x) % 2 == 0) {
            ans = (y - x) / 2;
        } else {
            ans = (y - x);
        }
    }

    if (chk) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}