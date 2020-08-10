#include<bits/stdc++.h>
using namespace std;
int n , m , a[501][501] , dp[501][501];
void init(){
	cin >> m >> n;
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
	for(int j = 0 ; j <= n+1 ; j++ ) dp[1][j] = 1;
    for(int i = 0 ; i <= m+1 ; i++ ) dp[i][1] = 1;
}
int res(){
	int s = 0;
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(a[i][j] == 1 && a[i-1][j] == 1 && a[i][j-1] == 1 && a[i-1][j-1] == 1)
			    dp[i][j] = min(min(dp[i-1][j] , dp[i][j-1]), dp[i-1][j-1]) + 1;
			 else if(a[i][j] == 1) dp[i][j] = 1; else dp[i][j] = 0;
			s = max(s , dp[i][j]);
		}
	}
	return s;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

