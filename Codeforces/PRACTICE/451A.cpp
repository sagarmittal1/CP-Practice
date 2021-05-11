#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	IOS;

	int n, m;
	cin >> n >> m;

	int x = min(n, m);

	if (x % 2 == 0) {
		cout << "Malvika" << endl;
	} else {
		cout << "Akshat" << endl;
	}

	return 0;
}