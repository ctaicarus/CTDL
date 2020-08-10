#include<bits/stdc++.h>
using namespace std;
// tong cua k so phia truoc , fibonaci
int n , k , p = pow(10 , 9) + 7;
int res(){
	int dp[n+1];
	dp[0] = 1 ; dp[1] = 1;
	for(int i = 2 ; i <= n ; i++){
		dp[i] = 0;
		for(int j = i-1 ; j >= 0 && j >= i - k ; j--){
			dp[i] = (dp[i] + dp[j]) % p;
		}
	}
	return dp[n];
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		cout << res() << endl;
	}
}
