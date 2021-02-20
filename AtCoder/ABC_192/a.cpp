#include <bits/stdc++.h>
using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;

	if (n % 100 == 0) {
		cout << "100";
	} else {
		cout << (100-(n % 100));
	}

	return 0;
}