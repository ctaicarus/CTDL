#include<bits/stdc++.h>
using namespace std;
long long n , v;
long long a[1005] , c[1005] , dp[1005][1005];
int main(){
	int T ;
	cin >> T;
	while(T--){
		cin >> n >> v;
		for(int i = 1 ; i <= n ; i++) {
			cin >> a[i];
		}
		for(int i = 1 ; i <= n ; i++) {
			cin >> c[i];
		}
		dp[0][0] = 0;
		for(int i = 0 ; i <= n ; i++){
			for(int j = 0 ; j <= v ; j++){
				if(i == 0 || j == 0) dp[i][j] =0; else
				if(j < a[i]) dp[i][j] = dp[i-1][j]; else
				dp[i][j] = max(dp[i-1][j] , dp[i-1][j - a[i]] + c[i]);
			}
		}
		cout << dp[n][v] << endl;
	}
}

