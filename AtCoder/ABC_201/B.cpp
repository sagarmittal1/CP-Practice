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

	int n; cin >> n;
	vector <pair<int, string>>	v;

	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		int n; cin >> n;
		v.pb(make_pair(n, s));
	}
	sort(v.rbegin(), v.rend());

	cout << v[1].second << endl;

	return 0;
}