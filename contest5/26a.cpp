#include<bits/stdc++.h>
using namespace std;
long long n , v;
long long a[1005] , dp[1005][1005];
int main(){
		cin >>  v >> n;
		for(int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		for(int i = 0 ; i <= n ; i++) dp[i][0] = 0;
		for(int j = 0 ; j <= v ; j++) dp[0][j] = 0;
		dp[0][0] = 0;
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= v ; j++){
				if(j < a[i]) dp[i][j] = dp[i-1][j]; else
				dp[i][j] = max(dp[i-1][j] , dp[i-1][j - a[i]] + a[i]);
			}
		}
		cout << dp[n][v] << endl;
}

