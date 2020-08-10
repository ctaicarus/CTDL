#include<bits/stdc++.h>
using namespace std;
string s1 , s2;
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> s1 >> s2;
		int n = s1.length() , m = s2.length();
		int dp[n+1][m+1]; // so cach bien doi i ki tu dau tien cua x thanh j ki tu dau tien cua y
		for(int i = 0 ; i < n ; i++) dp[i][0] = i;
		for(int i = 0 ; i < m ; i++) dp[0][i] = i;
		if(s1[0] == s2[0]) dp[0][0] = 0; else dp[0][0] = 1;
		for(int i = 1 ; i < n ; i++){
			for(int j = 1 ; j < m ; j++){
				if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1];
				else dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
			}
		}
		cout << dp[n-1][m-1] << endl;
	}
}

