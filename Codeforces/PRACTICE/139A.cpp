#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0);cin.tie();cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define ff first
#define ss second

int main()
{
	fast;

	int n; cin >> n;
	int a[7];

	for (int i = 0; i < 7; i++) cin >> a[i];

	int x = 0, ans = 0, j = 0;

	while (x < n) {
		if (j == 7) {
			j = 0;
			ans = 0;
		}
		x += a[j];
		ans = j;
		j++;
	}

	cout << ans + 1 << endl;

	return 0;
}