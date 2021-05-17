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

	int q; cin >> q;

	while (q--) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;

		int a = l1, b = l2;

		while (a == b) {
			if (a <= r1) {
				a += 1;
			}
			if (a == b) {
				if (b <= r2) {
					b += 1;
				}
			}

		}

		cout << a << " " << b << endl;
	}

	return 0;
}