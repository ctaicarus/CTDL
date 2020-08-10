// quy hoach dong
// bai toan so dong xu nho nhat co khoi luong la x
#include<bits/stdc++.h>
using namespace std;
int n , x , a[100]; // n dong xu , khoi luong x , a[i] khoi luong dong xu i
int dp[100] ; // ket qua , dp[x] = k , k la so dong xu nho nhat de co khoi luong x
int main(){
	cin >> n >> x;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	dp[0] = 0;
	for(int i = 1 ; i <= x + 1 ; i++){
		for(int j = 1 ; a[j] <= i ; j++){
			dp[i] =  dp[i - a[j]] + 1 ; // gia tri ban dau
			break;
		}
		for(int j = 1 ; a[j] <= i ; j++){
			dp[i] = min(dp[i] , dp[i - a[j]] + 1) ;
		}
	}
	cout << dp[x];
}

