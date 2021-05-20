// first I thought that solving the 2 equations will be useful
// But as the constraint are small
// we can just brute force this & rememmber that a. b >= 0
// after 5 tries finally got it correct ;)

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n, m;
	cin >> n >> m;
	set <pair<int, int>> st;

	for (int i = 0; i <= n; i++) {
		int a = i;
		int b = n - (a * a);
		if (a + (b * b) == m && b >= 0) {
			st.insert(make_pair(a, b));
		}
	}

	cout << st.size() << endl;

	return 0;
}