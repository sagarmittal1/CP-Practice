#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
	IOS;

	string s; cin >> s;
	string str1 = "0000000";
	string str2 = "1111111";

	int f1 = s.find(str1);
	int f2 = s.find(str2);

	if (f1 != string::npos or f2 != string::npos) {
		cout << "YES";
	} else {
		cout << "NO";
	}


	return 0;
}