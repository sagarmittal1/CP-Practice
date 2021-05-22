#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define int long long
#define pb push_back

int32_t main()
{
	fast;

	string s; cin >> s;

	reverse(s.begin(), s.end());

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '6') {
			s[i] = '9';
		} else if (s[i] == '9') {
			s[i] = '6';
		} else {
			continue;
		}
	}

	cout << s << endl;

	return 0;
}