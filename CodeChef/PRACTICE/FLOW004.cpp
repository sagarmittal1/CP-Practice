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
		int n; cin >> n;
		string s = to_string(n);
		while (s.size() != 1) {
			s.pop_back();
		}
		int a1 = stoi(s);
		cout << a1 + n % 10 << endl;
	}

	return 0;
}