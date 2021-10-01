//https://cses.fi/problemset/task/1094
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	/*
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	 */
 
	ll n;
	cin >> n;
	ll ar[n];
	for (ll i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	ll count = 0, dif = 0;
 
	for (ll j = 0; j < n - 1; j++)
	{
		dif = 0;
		if (ar[j + 1] < ar[j])
		{
			dif = ar[j] - ar[j + 1];
			ar[j + 1] = ar[j ] ;
			count = count + dif;
		}
 
	}
	cout <<  count << endl;
 
 
}
