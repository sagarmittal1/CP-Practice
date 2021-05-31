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

	int t; cin >> t;

	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		vector <int> fu(n + 1, 0);

		for (int i = 0; i < k; i++) {
			int x; cin >> x;
			if (x <= n) {
				fu[x] += 1;
			}
		}

		vector <int> ans;

		for (int i = 1; i < n + 1; i++) {
			if (fu[i] > 1) {
				ans.pb(i);
			}
		}

		cout << ans.size() << " ";
		for (auto it : ans) {
			cout << it << " ";
		}
		cout << endl;
	}

	return 0;
}