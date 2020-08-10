#include<bits/stdc++.h>
using namespace std;
long long n , a[1000001] , dp[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		dp[i] = a[i];
	}	
}
long long res(){
	long long ans = 0;
	for(int i = 2 ; i <= n ; i++){
		dp[i] = max(dp[i] , dp[i-1]+a[i]);
		ans = max(ans , dp[i]);
	}
	return ans ;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}
