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

	int n, m;
	cin >> n >> m;
	int b[m];
	int a[n + 1] = {0};

	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		for (int j = x; j < n + 1; j++) {
			if (a[j] == 0) {
				a[j] = x;
			}
		}
	}

	for (int i = 1; i < n + 1; i++) {
		cout << a[i] << " ";
	}

	return 0;
}