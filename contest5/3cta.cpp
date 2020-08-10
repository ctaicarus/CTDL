#include<bits/stdc++.h>
using namespace std;
int n , s , a[1001] ;
void inti(){
	cin >> n >> s;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	
}
bool res(){
    int dp[s+1];
    for(int i = 1 ; i <= s ; i++) dp[i] = 0;
    dp[0] = 1;
    for(int i = 1 ; i <= n ; i++){
    	for(int j = s ; j >= a[i] ; j--){
    		if(dp[j] == 0 && dp[j-a[i]] == 1) dp[j] = 1;
		}
	}
	if(dp[s] == 1) return true; else return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		inti();
		if(res()) cout << "YES\n" ; else cout << "NO\n";
	}
}
