#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
	fast;

	int t; cin >> t;

	while (t--) {
		int x, a, b;
		cin >> x >> a >> b;
		int ans = (a + (100 - x) * b) * 10;
		cout << ans << endl;
	}

	return 0;
}