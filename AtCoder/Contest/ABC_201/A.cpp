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

	int a[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> a[i];
	}

	sort(a, a + 3);

	if (2 * a[1] == a[0] + a[2]) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}