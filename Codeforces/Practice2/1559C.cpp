#include<bits/stdc++.h>
#define ll long long int
#define inf 1E18
#define ninf -1*1E18
#define mod 100000000000
#define fi first
#define si second
#define pb push_back
#define vi vector<long long int>
#define pi pair<long long int,long long int>
#define vpi vector<pair<long long int,long long int>>
using namespace std;
ll const lac = 100000;

ll modmul(ll a, ll b) {

	return ((a % mod) * (b % mod)) % mod;

}
ll modadd(ll a, ll b) {
	return (((a % mod) + (b % mod))) % mod;
}
long long modExpo(long long a, long long b, long long m) {

	long long result = 1;
	a = a % m;
	while (b > 0) {

		if (b % 2) {

			result = modmul(result, a);
			b--;
		}

		else {
			a = modmul(a, a);
			b /= 2;
		}

	}


	return result % m;
}


ll gcd(ll a, ll b) {
	if (b == 0) return a; else return gcd(b, a % b);
}

class comp {   //set of pairs comparator:
public:
	bool operator()(int a, int b)const {

		return a > b;

	}

};

bool compa(pi a, pi b) {
	return a.fi > b.fi;
}


void solve(ll t1) {


	ll n;
	cin >> n;

	vi arr(n);

	for (ll i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (arr[n - 1] == 0) {

		for (ll i = 1; i <= n + 1; i++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	else if (arr[0] == 1) {
		cout << n + 1 << " ";
		for (ll i = 1; i <= n; i++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	else {

		ll idx = 0;

		for (int i = 1; i < n; i++) {
			if (arr[i] == 0) {
				idx = i;
			}
		}
		if (idx == 0) {
			cout << 1 << " " << n + 1 << " ";
			for (ll i = 2; i <= n; i++) {
				cout << i << " ";
			}
			cout << "\n";
			return;

		}
		else {

			for (ll i = 1; i <= idx + 1; i++) {
				cout << i << " ";
			}
			cout << n + 1 << " ";
			for (ll i = idx + 2; i <= n; i++) {
				cout << i << " ";
			}
			cout << "\n";
			return;
		}

		cout << -1 << "\n";
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t ;
	t = 1;

	// init();
	cin >> t;

	for (ll i = 1; i <= t; i++) {

		solve(t);
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

	return 0;
}
