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

	int k; cin >> k;
	int a[12];

	for (int i = 0; i < 12; i++) cin >> a[i];

	sort(a, a + 12, greater<int>());

	if (k == 0) {
		cout << 0;
	} else {
		int ans = 0, x = 0, j = 0;
		while (x < k) {
			if (j == 12) {
				break;
			}
			ans++;
			x += a[j];
			j++;
		}
		if (x < k) {
			cout << -1;
		} else {
			cout << ans;
		}
	}

	return 0;
}