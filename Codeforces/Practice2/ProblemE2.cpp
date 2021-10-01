#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
 
 
using namespace std;
using namespace __gnu_pbds;
typedef pair<int, int> node;
typedef tree<node, null_type, less<node>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
int n,m,k;
 
void solve()
{
	cin>>n;
	ordered_set os;
	long long int ans =0;
	for(int i =0;i<n;i++){
		int t;
		cin>>t;
		os.insert(node(t,i));
		int x = os.order_of_key(node(t,0));
		int same = os.order_of_key(node(t,i))-x;
		int y = i-same-x;
		ans = ans + min(x,y);
	}
	cout<<ans;
		
}
int main()
{
	int T;
	cin >> T;
	while(T--){
		solve();
		cout<<"\n";
	}
	return 0;
} 
 
 
