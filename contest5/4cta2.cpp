#include<bits/stdc++.h>
using namespace std;
int n , k , a[1001];
int ans;
int sum;
void init(){
	cin >> n >> k;
	ans = 0;
	sum = 0;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		a[i] = a[i] % k;
		sum += a[i];
	}
}
void Try(int i , int s , int d){
	if(i > n) {
		if(s % k == 0){
			ans = max(ans , d);
			return;
		}
		return;
	}
	for(int j = 1 ; j >= 0 ; j--){
		if(j == 1) Try(i+1 , s + a[i] , d+1);
		if(j == 0) Try(i+1 , s  , d);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if(k == 1) cout << n << endl;
	   else if(sum % k == 0){
	   	    cout << n << endl;
	   }
	   else {
	   	 	Try(1,0,0);
	        cout << ans << endl;
	   }
	}
}

