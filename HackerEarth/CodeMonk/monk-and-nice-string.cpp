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

	int n; cin >> n;
	string a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		int ans = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (a[j] < a[i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}