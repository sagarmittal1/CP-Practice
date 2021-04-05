#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	IOS;

	string s; cin >> s;
	int n = s.size();

	for (int i = 0; i < n - 2; i++) {
		if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B') {
			s[i] = '#';
			s[i + 1] = '#';
			s[i + 2] = '#';
			i += 2;
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[i] != '#')	{
			cout << s[i];
			if (s[i + 1] == '#') {
				cout << " ";
			}
		}
	}


	return 0;
}