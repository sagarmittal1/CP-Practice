// total 6 case will be made 
// no extra thinking just made it man

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

	int x = max((a * b * c), (a + b + c));
	int y = max(((a * b) + c), (a * (b + c)));
	int z = max(((a + b) * c), (a + (b * c)));

	int ans = max(x, max(y, z));
	cout << ans << endl;

	return 0;
}