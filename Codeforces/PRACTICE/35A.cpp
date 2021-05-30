// first problem solved that used input.txt & output.txt
// use freopen & take input from them

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

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int x; cin >> x;
	int n = 3;
	int ans = x;

	while (n--) {
		int a, b;
		cin >> a >> b;
		if (a == ans or b == ans) {
			if (a == ans) {
				ans = b;
			} else {
				ans = a;
			}
		}
	}

	cout << ans << endl;

	return 0;
}