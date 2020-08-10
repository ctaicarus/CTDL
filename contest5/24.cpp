#include<bits/stdc++.h>
using namespace std;
int n , m;
int dp[30][30];
void init(){
	cin >> n >> m;
	for(int i = 0 ; i <= n ; i++) dp[i][0] = i;
	for(int j = 0 ; j <= m ; j++) dp[0][j] = j;
}
int res(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			if(i-1 != 0 && j-1 != 0) dp[i][j] = dp[i-1][j] + dp[i][j-1] + dp[0][j] + dp[i][0] ;
			if(i-1 != 0 && j-1 == 0) dp[i][j] = dp[i-1][j] + dp[i][j-1] + dp[0][j]  ;
			if(i-1 == 0 && j-1 != 0) dp[i][j] = dp[i-1][j] + dp[i][j-1] + dp[i][0] ;
			if(i-1 == 0 && j-1 == 0) dp[i][j] = dp[i-1][j] + dp[i][j-1] ;
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
	}
}

