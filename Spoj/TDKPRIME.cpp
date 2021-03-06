#include <bits/stdc++.h>
using namespace std;

vector <int> prime;

bool ar[90000001];

void sieve() {
	int maxN = 90000000;
	ar[0] = ar[1] = true;

	for (int i = 2; i * i <= maxN; i++) {
		if (!ar[i]) {
			for (int j = i * i; j <= maxN; j += i) {
				ar[j] = true;
			}
		}
	}

	for (int i = 2; i <= maxN; i++) {
		if (!ar[i]) {
			prime.push_back(i);
		}
	}
}

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	sieve();

	while (t--) {
		int n; cin >> n;
		cout << prime[n - 1] << "\n";

	}

	return 0;
}