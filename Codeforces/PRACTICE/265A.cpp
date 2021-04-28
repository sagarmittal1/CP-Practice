#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s1, s2;
	cin >> s1 >> s2;
	int n = s2.size();
	int liss = 0;

	for (int i = 0; i < n; i++) {
		if (s2[i] == s1[liss]) {
			liss++;
		}
	}

	cout << liss + 1;

	return 0;
}