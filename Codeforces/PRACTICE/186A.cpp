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

	string a, b;
	cin >> a >> b;

	if (a.size() != b.size()) {
		cout << "NO" << endl;
		return 0;
	}

	int x = 0;
	string s1, s2, s3;

	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) {
			x++;
			s1.pb(a[i]);
			s2.pb(b[i]);
		}
	}

	for (int i = s2.size() - 1; i >= 0; i--) {
		s3.pb(s2[i]);
	}

	if (x == 2 and s1 == s3) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}