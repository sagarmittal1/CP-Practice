#include <bits/stdc++.h>

#define ll long long

using namespace std;

 

void dfs(int u, vector<vector<int>> &adj, vector<int> &colors, vector<int> &ans, vector<stack<int>> &stk)

{

if(stk[colors[u]].empty())

 ans[u] = -1;

else

 ans[u] = stk[colors[u]].top();

 

stk[colors[u]].push(u);

for(auto v:adj[u])

{

 dfs(v, adj, colors, ans, stk);

}

stk[colors[u]].pop();

}

int main()

{

   ios_base::sync_with_stdio(false);

   cin.tie(NULL);

   int n, c;

   cin>>n>>c;

   vector<vector<int>> adj(n+1);

   vector<int> colors(n+1);

   vector<int> ans(n+1, 0);

   vector<stack<int>> stk(n+1);

   for(int i=1; i<=n; ++i)

   {

    int p;

    cin>>p;

    adj[p].push_back(i);

   }

   for(int i=1; i<=n; ++i)

    cin>>colors[i];

   dfs(1, adj, colors, ans, stk);

   for(int i=1; i<=n; ++i)

    cout<<ans[i]<<" ";

}