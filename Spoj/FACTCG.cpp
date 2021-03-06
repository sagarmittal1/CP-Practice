// first problem that I can proud of solved in first time

#include <bits/stdc++.h>
using namespace std;

int ar[100001];

void sieve() {
	int n = 100000;
	for (int i = 1; i <= n; i++) ar[i] = i;

	for (int i = 2; i <= n; i++) {
		if (ar[i] == i) {
			for (int j = 2 * i; j <= n; j += i) {
				ar[j] = min(ar[j], i);
			}
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	sieve();
	while (cin >> n) {
		cout << "1";
		while (n > 1) {
			cout << " x " << ar[n];
			n /= ar[n];
		}
		cout << endl;
	}

	return 0;
}