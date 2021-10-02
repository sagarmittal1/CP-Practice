#include<bits/stdc++.h>
using namespace std;

#define int         long long int
#define rep(i,a,b)  for (int i = a; i < b; ++i)
#define rrep(i,z,a) for (int i = z; i >= a; --i)
#define rep0(n)     for(int i = 0 ; i < n; ++i )
#define rep1(n)     for(int i = 1 ; i <= n; ++i )
#define tc          int test;cin>>test; while(test--)
#define all(v)      v.begin(),v.end()
#define pb          push_back
#define ff          first
#define ss          second
#define mp          make_pair
#define endl        "\n"
#define spc         " "
#define maxn        998244353
#define mod         1000000007
#define kill(x)     return cout<<x<<endl,0
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

void solve() {
 int a,b,c,m; cin>>a>>b>>c>>m;
int x=0;
int maxi = max(a - 1, x) + max(b - 1, x) +max(c-1,x);
if(m>maxi){cout<<"NO"<<endl; return;}

int k= max({a,b,c});
if(k>a+b+c-k)
{
    if(m>= k- ((a+b+c-k)+1)){cout<<"YES"<<endl; }
    else{cout<<"NO"<<endl;}
}
else{

cout<<"YES"<<endl;
}

//start solving here// 


}

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((int)result * base) % mod;
    base = ((int)base * base) % mod;
    exp >>= 1;
  }
  return result;
}
