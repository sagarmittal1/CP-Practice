// I never used set before so, this was amazing to see how set works

#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	set <int> s;
	int n;
    
	while (cin >> n) {
		s.insert(n);
	}
	cout << 4 - s.size();

	return 0;
}