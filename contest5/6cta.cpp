#include<bits/stdc++.h>
using namespace std;
string s;
int n;
void inti(){
	cin >> s;
	n = s.length();
}
int res(){
	bool dp[n+1][n+1];
	for(int i = 0 ; i < n ; i++) dp[i][i] = true;
	int ans = 1;
	for(int k = 1 ; k <= n-1 ; k++){
		for(int i = 0 ; i < n - k ; i++){
			int j = i+k;
			if(k == 1) dp[i][j] = (s[i] == s[j]); else
			dp[i][j] = dp[i+1][j-1] and (s[i] == s[j]);
			if(dp[i][j]) ans = max(ans , j - i + 1);
		}
	}
	return ans;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		inti();
		cout << res() << endl;
	}
}
