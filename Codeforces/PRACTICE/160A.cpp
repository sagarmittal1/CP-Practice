#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	int n; cin >> n;
	int a[n];
	int sum = 0, coin = 0;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}

	sort(a, a + n);
	reverse(a, a + n);

	int x = 0, i = 0;

	while (x <= sum / 2) {
		x += a[i];
		i++;
		coin++;
	}

	cout << coin;

	return 0;
}