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
	string a, b;
	cin >> a >> b;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		int x = a[i] - '0';
		int y = b[i] - '0';
		if (abs(x - y) <= 5) {
			ans += abs(x - y);
		} else {
			ans += 10 - abs(x - y);
		}
	}

	cout << ans << endl;

	return 0;
}