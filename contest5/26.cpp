#include<bits/stdc++.h>
using namespace std;
long long x , n , a[1001]; // n con bo , khoi luong x , a[i] khoi luong con bo i
long long dp[1001] ; // khoi luong max cho duoc den con bo thu i
int main(){
	cin >> x >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	dp[1] = a[1];
    long long ans = dp[1];
    for(int i = 2 ; i <= n ; i++){
       dp[i] = a[i];
       for(int j = 1 ; j < i ; j++){
       	  if(dp[j] + a[i] <= x) dp[i] = max(dp[i] , dp[j] + a[i]) ; // cong voi khoi luong lon nhat phia truoc
       	  else dp[i] = max(dp[i] , dp[j]);
	   }
	   ans = max(ans , dp[i]);
	}
	cout << ans << endl;
}

