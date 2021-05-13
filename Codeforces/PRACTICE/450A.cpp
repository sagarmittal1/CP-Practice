#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
	fast;

	int n, m;
	cin >> n >> m;

	queue <pair<int, int>> qu;

	for (int i = 1; i <= n; i++) {
		int x; cin >> x;
		qu.push(make_pair(x, i));
	}

	while (qu.size() != 1) {
		if (qu.front().ff <= m) {
			qu.pop();
		} else {
			qu.front().ff -= m;
			int x1 = qu.front().ff;
			int x2 = qu.front().ss;

			qu.pop();
			qu.push(make_pair(x1, x2));
		}
	}

	cout << qu.front().ss;

	return 0;
}