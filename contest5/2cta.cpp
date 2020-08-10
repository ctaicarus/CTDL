#include<bits/stdc++.h>
using namespace std;
int n , a[1001] , dp[1001];
void inti(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		dp[i] = 0;
	}
	
}
int res(){
	int ans = 1;
	dp[1] = 1;
	for(int i = 2 ; i <= n ; i++){
		for(int j = i-1 ; j >= 1 ; j--){
			if(a[i] > a[j]) {
				dp[i] = max(dp[i] , dp[j] + 1);
			}
		}
		ans = max(ans , dp[i]);
	}
	return ans;
}
int main(){
	int T;
	T = 1;
	while(T--){
		inti();
		cout << res() << endl;
	}
}
