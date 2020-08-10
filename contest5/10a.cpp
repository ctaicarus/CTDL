#include<bits/stdc++.h>
using namespace std;
int n , m , a[1001][1001] , dp[1001][1001];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i <= n ; i++) {
		dp[i][0] = INT_MAX;
		dp[i][m+1] = INT_MAX;
	}
	for(int j = 0 ; j <= m ; j++) {
		dp[0][j] = INT_MAX;
		dp[n+1][j] = INT_MAX;
	}	
}
int res(){
	dp[1][1] = a[1][1];
	for(int i = 1 ; i <= n ; i++){
		for(int j = 2 ; j <= m ; j++){
			dp[i][j] = min(min(dp[i][j-1] , dp[i-1][j-1]) , dp[i][j+1]) + a[i][j];							
		}
	}
	return dp[n][m];
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= m ; j++){
			   cout << dp[i][j] << " ";
	    	}
	    	cout << endl;
		}		
	}
}

