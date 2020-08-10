#include<bits/stdc++.h>
using namespace std;
int n;
int a[1001] , dp[1001];
int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
		dp[i] = 1;
	}
	int res = dp[0];
	for(int i = 1 ; i < n ; i++){
		for(int j = i - 1 ; j >= 0 ; j--){
			if(a[i] > a[j]) {
				dp[i] = max(dp[i] , dp[j] + 1);
			}
		}
	}
	cout << *max_element(dp,dp+n) << endl;
}
