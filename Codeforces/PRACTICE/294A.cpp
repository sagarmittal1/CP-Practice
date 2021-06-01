#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
	fast;

	int n; cin >> n;
	int a[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	int m; cin >> m;

	while (m--) {
		int x, y;
		cin >> x >> y;
		a[x - 1] += y - 1;
		a[x + 1] += a[x] - y;
		a[x] = 0;
	}

	for (int i = 1; i <= n; i ++) {
		cout << a[i] << endl;
	}

	return 0;
}