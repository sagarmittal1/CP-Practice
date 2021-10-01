#include<bits/stdc++.h>
using namespace std;

/****** Debugging Class *****/
vector<string> vec_splitter(string s) {
  s += ',';
  vector<string> res;
  while(!s.empty()) {
    res.push_back(s.substr(0, s.find(',')));
    s = s.substr(s.find(',') + 1);
  }
  return res;
}
void debug_out(
vector<string> __attribute__ ((unused)) args,
__attribute__ ((unused)) int idx, 
__attribute__ ((unused)) int LINE_NUM) { cerr << endl; } 
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
  if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
  stringstream ss; ss << H;
  cerr << args[idx] << " = " << ss.str();
  debug_out(args, idx + 1, LINE_NUM, T...);
}
template<class K, class V>ostream& operator<<(ostream&s,const pair<K,V>&p){s<<'<'<<p.first<<", "<<p.second<<'>';return s;}
template<class T, class=typename T::value_type, class=typename enable_if<!is_same<T,string>::value>::type>
ostream& operator<<(ostream&s,const T&v){s<<'[';for(auto&x:v){s<<x<<", ";}if(!v.empty()){s<<"\b\b";}s<<']';return s;}
void __prnt(){cerr<<endl;} template<class T, class...Ts>void __prnt(T&&a,Ts&&...etc){cerr<<a<<' ';__prnt(etc...);}
#ifndef ONLINE_JUDGE
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#define debug2(...) __prnt(__VA_ARGS__)
#else
#define debug(...) 42
#define debug2(...) 42
#endif
/**********************************************/

/****** Template of some basic operations *****/
template<typename T> T gcd(T a, T b){return(b?__gcd(a,b):a);} 
template<typename T> T lcm(T a, T b){return(a*(b/gcd(a,b)));}
template<typename T> T power(T e, long long n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;} 
template<typename T> T powerMod(T e, long long n, long long m){T x=1,p=e%m;if(p==0)return 0;while(n){if(n&1)x=(long long)x*p%m;p=(long long)p*p%m;n>>=1;}return x;} 
template<typename T> T modInv(T a, T m){return powerMod(a,m-2,m);} 
/**********************************************/

#define endl "\n"
#define fi first
#define se second
#define mdp make_pair
#define pb push_back
#define sz(x) ((int)(x).size()) 
#define max(x,y) (x>y)?x:y 
#define min(x,y) (x<y)?x:y
#define clr(x) memset(x,0,sizeof(x));
#define fill(x,v) memset(x,v,sizeof(x));
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define REP1(i,n) for (long long int i = 1; i <= n; i++)
#define REP0(i,n) for (long long int i = 0; i < n; i++)
#define flush fflush(stdout)
#define precision(x) cout << fixed << setprecision(x)

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

const int inf=INT_MAX;
const long long INF=9e18;
const int mod=1000000007;
const long double eps=1e-9;

const int N=5e6;
int spf[N];
void sieve()     //saved Sieve SAME TIME complexity ,BUT SPACE CONSUMING 
{
        spf[1] = 1;
    for (int i=2; i<=N; i++){
         spf[i] = i;
    }
    for (int i=4; i<=N; i+=2){
        spf[i] = 2;
    }
 
    for (int i=3; i*i<=N; i++){
        if (spf[i] == i)
        {
            for (int j=i*i; j<=N; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 bool prime[150000+ 1];
void SieveOfEratosthenes(ll n)    // time complexity o(nlog(logn))    
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
      prime[0]=prime[1]=false;
    
}
set<int> getFactorization(int x)     // THIS IS PRIME FACTORIZATION WHICH WILL GIVE ALL PRIME FACTORS TILL x
{
    set<int> ret;
   for(int i=2;(i*i)<=x;i++)
    {
        if(x%i==0)
        {
            ret.insert(i);
            while(x%i==0)
            {
                x/=i;
            }
        } 
    }
    if(x>1)
    {
        ret.insert(x);
    }
 
    return ret;
}
vector<int> getFactorization1(int x)     //this is nice as it takes o(logn ) time only but last takes nlog(logn)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}


long long int power(int a,int n,int c){    //O(logn)  power function
    long long int s=1;
    while(n){
        if(n%2!=0){
            s=s%c*a%c;
            n--;
        }
        else{
            a=(a*a)%c;
            n/=2;
        }
    }
    return s%10;
}
 void  GCD_Candidates(ll A , ll B)            // all factors 
{
  set <ll>s;
      ll num =min(A,B);
      ll GANESH_JI=max(A,B);
  for(ll i=1;i*i<=num;i++){
  if(num % i == 0)
  {
     
  if(GANESH_JI%i==0)s.insert(i);
    if(GANESH_JI%(num/i)==0)  s.insert(num/i);
  }
   }
}
 struct graph{
 ll a;
 ll b;
 ll w;
};
 bool component(graph a,graph b){
 if(a.w<b.w)return true;
 return false;
 }
 int par[150000];
 ll find( ll a){
 if(par[a]==-1)return a;
 return par[a]=find(par[a]);
}
  /* ll T[2][2];
   ll I[2][2];
void mul_matrix(ll A[][2],ll B[][2],ll dim){
        ll res[dim][dim];
        for(ll i=0;i<dim;i++){
                for(ll j=0;j<dim;j++){
                        res[i][j]=0;
                        for(ll k=0;k<dim;k++){
                                res[i][j]=(ll)(res[i][j]%mod+(A[i][k]*B[k][j])%mod)%mod;
                        }
                }
        }
         for(ll i=0;i<dim;i++){
                for(ll j=0;j<dim;j++){
                        A[i][j]=(ll)res[i][j]%mod;
                }
         }
}
void power_for_matrix_expo(ll dim ,ll n){
        for(ll i=0;i<dim;i++){
                for(ll j=0;j<dim;j++){
                        if(i==j)I[i][j]=1;
                        else I[i][j]=0;
                }
        }
        while(n){
                if(n%2){
                        mul_matrix(I,T,dim),n--;
                }
                else{
                        mul_matrix(T,T,dim),n/=2;
                }
        }
       ll d=(3*I[0][0]%mod+1*I[0][1]%mod)%mod;
       d=(d+(ll)100*mod)%mod;
        }*/

// m is A.size() n is the A[0].size()
/*
void dfs(vector<string> &A,vector<vector<int>> &dp,int i, int j, int xs, int ys) {
    if (i<0 or i>=A.size() or j<0 or j>=A[0].size()) return;
    dp[i][j]++;
    if (A[i][j]=='0') dfs(A,dp,i+xs,j+ys,xs,ys);
}

vector<vector<int> > Solution::queenAttack(vector<string> &A) {
    int n=A.size(),m=A[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));
    const int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
    const int dy[] = {0, 1, 0, -1, -1, 1, -1, 1};
    for (int i=0;i<n;++i) {
        for (int j=0;j<m;++j) {
            if (A[i][j]=='1') {
                for (int k=0;k<8;++k) {
                    dfs(A,dp,i+dx[k],j+dy[k],dx[k],dy[k]);
                }
            }
        }
    }
    return dp;
}*/


/*int n;int m;// m is A.size() n is the A[0].size()
int dirX[]={-1,1,0,0};
int dirY[]={0,0,-1,1};int p=0;
int visited[1001][1001];
char  a[1001][1001];
int isafe(int x,int y){
        if(visited[x][y]==0&&x<n&&x>=0&&y<m&&y>=0)return 1;
    return 0;
}
void dfs(int x, int y){
     if(a[x][y]=='R'){
        debug("1");
        visited[x][y]=1;
        for(int i=0;i<4;i++){
        if(visited[x+dirX[i]][y+dirY[i]]==0&&x+dirX[i]<n&&x+dirX[i]>=0&&y+dirY[i]<m&&y+dirY[i]>=0){
            if(a[x+dirX[i]][y+dirY[i]]=='R'){
                p=1;
                debug(x+dirX[i],y+dirY[i],x,y,i);
                break;
            }
            else {a[x+dirX[i]][y+dirY[i]]=='W';
              debug(x+dirX[i],y+dirY[i],x,y,i);
                   dfs(x+dirX[i],x+dirY[i]);
               }
        }
        if(p)return;
     }
 }
 if(a[x][y]=='W'){
        visited[x][y]=1;
        for(int i=0;i<4;i++){
            debug(visited[x+dirX[i]][y+dirY[i]]);
        if(visited[x+dirX[i]][y+dirY[i]]==0&&x+dirX[i]<n&&x+dirX[i]>=0&&y+dirY[i]<m&&y+dirY[i]>=0){
             debug("2");
            if(a[x+dirX[i]][y+dirY[i]]=='W'){
                p=1;
                debug(x+dirX[i],y+dirY[i],x,y,i);
                break;
            }
            else {a[x+dirX[i]][y+dirY[i]]=='R';
              debug(x+dirX[i],y+dirY[i],x,y,i);
                   dfs(x+dirX[i],x+dirY[i]);
               }
        }
        if(p)return;
     }
 }
}*/


void solve(){
    ll n;
    cin>>n;
    ll a[n];ll ci=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll b[n];
    b[0]=a[0];ll sum=0;ci=b[0];
    for(ll i=1;i<n;i++){
        b[i]=abs(a[i]-a[i-1]);
        ci=ci+b[i];
      
    }
    if(n-1!=0)ci=ci+a[n-1];
    for(ll i=0;i<n;i++){
        if(i==0){
            if(a[0]>a[1]){
            sum=sum+(a[0]-a[1]);
            //cout<<sum<<endl;
            }
        }
      else   if(i==n-1){
            if(a[n-1]>a[n-2]){
                sum=sum+(a[n-1]-a[n-2]);
            }
        }
     else {
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
             ll y=max(a[i-1],a[i+1]);
              y=a[i]-y;
             sum=sum+y;
               //cout<<sum<<endl;
        }
     }
        }
        cout<<ci-sum<<endl;
    }
int main()
{
   #ifndef ONLINE_JUDGE      // only command out when using local sublime input not online judge
  freopen("input.in","r",stdin);
  freopen("output.in","w",stdout);
  #endif
        ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
        int t=1;
        cin>>t;
        while(t--){
          /*   int n,m;int x,y;
             cin>>n>>m;
          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='W'||a[i][j]=='R'){
                    x=i;
                    y=j;
                }
            }
          }
               dfs(x,y);
               if(p=0){
                cout<<"YES"<<endl;
               }
               else cout<<"NO"<<endl;
               p=0;
               debug(x,y);
                for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }

               for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                   visited[i][j]=0;
                }
            }*/
            solve();
              }
        return 0;
}

