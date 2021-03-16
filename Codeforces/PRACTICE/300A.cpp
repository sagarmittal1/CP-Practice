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

	int n; cin >> n;
	int a[n];
	int n1 = 0, n2 = 0, n3 = 0;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < 0) {
			n1++;
			v1.push_back(a[i]);
		} else if (a[i] > 0) {
			n2++;
			v2.push_back(a[i]);
		} else {
			n3++;
			v3.push_back(a[i]);
		}
	}

	if (v2.size() == 0) {
		int x = v1.back();
		v1.pop_back();
		v2.push_back(x);

		int y = v1.back();
		v1.pop_back();
		v2.push_back(y);

		n2 += 2;
		n1 -= 2;
	}

	if (v1.size() % 2 == 0) {
		int x = v1.back();
		v1.pop_back();
		v3.push_back(x);

		n1--;git 
		n3++;
	}



	cout << n1 << " ";
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << n2 << " ";
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;

	cout << n3 << " ";
	for (int i = 0; i < v3.size(); i++) {
		cout << v3[i] << " ";
	}


	return 0;
}