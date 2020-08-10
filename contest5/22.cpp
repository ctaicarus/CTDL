#include<bits/stdc++.h>
using namespace std;
long long n , a[1000001];
long long dp[2][1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
int res(){
	long long ans = 0;
	dp[0][1] = 0;
	dp[1][1] = a[1];
	for(int i = 2 ; i <= n ; i++){
		dp[0][i] = max(dp[0][i-1] , dp[1][i-1]);
		dp[1][i] = dp[0][i-1] + a[i];
		ans = max(dp[0][i] , dp[1][i]);
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

