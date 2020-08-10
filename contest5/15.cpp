#include<bits/stdc++.h>
using namespace std;
int a , b , c;
string s1 , s2 , s3;
int dp[101][101][101];
void init(){
	cin >> a >> b >> c;
	cin >> s1 >> s2 >> s3;
	a = s1.length() ; b = s2.length() ; c = s3.length();
	for(int i = 0 ; i < a ; i++){
		for(int j = 0 ; j < b ; j++){
			for(int z = 0 ; z < c ; z++){
				dp[i][j][z] = 0;
			}
		}
	}
}
int res(){
	int s = 0;
	s1 = ' ' + s1; s2 = ' ' + s2; s3 = ' ' + s3;
	for(int i = 0 ; i < a ; i++){
		for(int j = 0 ; j < b ; j++){
			for(int z = 0 ; z < c ; z++){
				if(s1[i] == s2[j] && s2[j] == s3[z]) dp[i][j][z] = dp[i-1][j-1][z-1] + 1; 
				   else 
				       dp[i][j][z] = min( min(dp[i-1][j][z] , dp[i][j-1][z]) , dp[i][j][z-1]);
				s = max(s , dp[i][j][z]);
			}
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

