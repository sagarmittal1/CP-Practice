#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int a, b, c;
	cin >> a >> b >> c;
	int ans = (7 - a) + (7 - b) + (7 - c);
	cout << ans << endl;

	return 0;
}