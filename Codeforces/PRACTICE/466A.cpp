// ohh man this question was good 
// this taught how to use ceil

#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0);
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define endl "\n"

typedef long long ll;
typedef vector<int> vi;

int main()
{
	fast;

	int n, m, a, b;
	cin >> n >> m >> a >> b;

	float n1 = n, m1 = m, b1 = b;
	int ans = min(n * a, (n / m) * b + (n % m) * a);
	int x = ceil(n1 / m1) * b1;
	ans = min(ans, x);
	cout << ans << endl;

	return 0;
}