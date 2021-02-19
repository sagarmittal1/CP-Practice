// ***** this probelem teach me the concept of sieve
// try hard very hard for this

#include <bits/stdc++.h>
using namespace std;

int ar[1000001];

void sieve() {
	int n = 1000000;
	for (int i = 1; i <= n; i++) ar[i] = i;

	for (int i = 2; i <= n; i++) {
		if (ar[i] == i) {
			for (int j = i * 2; j <= n; j += i) {
				ar[j] = min(ar[j], i);
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t, n;
	cin >> t;

	int res[t];
	sieve();

	for (int i = 0; i < t; i++) {
		cin >> n;
		res[i] = n - ar[n];
	}

	for (int i = 0; i < t; i++) {
		cout << res[i] << "\n";
	}

	return 0;
}