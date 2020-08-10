#include<bits/stdc++.h>
using namespace std;
string a , b;
int dp[1001][1001]; // dp[vta][vtb]
void inti(){
	cin >> a >> b;
	a = ' ' + a;
	b = ' ' + b;
	for(int i = 0 ; i < a.length() ; i++) dp[i][0] = 0;
	for(int i = 0 ; i < b.length() ; i++) dp[0][i] = 0;
}
int res(){
	int x = 0;
	for(int i = 1 ; i < a.length() ; i++){
		for(int j = 1 ; j < b.length() ; j++){
			if(a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1; else 
			dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			x = max(x , dp[i][j]);
		}
	}
	return x;
}
int main(){
	int T;
	scanf("%d\n" , &T);
	while(T--){
		inti();
		cout << res() << endl;
	}
}
