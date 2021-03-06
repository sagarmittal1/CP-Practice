# Prefix Sum

#### It is used when we want to find the sum of some range (range sum) then we can easily find by using this & making an array called dp.

``` c++
    int n; cin >> n;

	int arr[1001];
	int dp[1001]; 
    // taking another array storing sum of previous element

	for (int i = 1; i <= n; i++) cin >> arr[i];

	dp[0] = 0;

	for (int i = 1; i <= n; i++) {
		dp[i] = dp[i - 1] + arr[i];
	}

	for (int i = 1; i <= n; i++) {
		cout << dp[i] << " ";
	}

    /*
    For finding sum simply dp[r] - dp[l-1]
    This is for if the index start from 0
    */
```