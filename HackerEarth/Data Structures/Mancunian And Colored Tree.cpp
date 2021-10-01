#include<bits/stdc++.h>
using namespace std;
 
int color[100001],parent[100001];
int main()
{
 int n,c,i,flag,x;
 cin>>n>>c;
 for(i=2;i<=n;i++)
 {
 cin>>x;
 parent[i]=x;
 }
 for(i=1;i<=n;i++)
 {
 cin>>color[i];
 }
 
 for(i=1;i<=n;i++)
 {
 flag=0;
 int p=i;
 while(p!=1)
 {
 p=parent[p];
 if(color[i]==color[p])
 {
 cout<<p<<" ";
 flag=1;
 break;
 }
 }
 if(flag==0)
 cout<<"-1 ";
 
 }
 
}