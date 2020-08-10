#include<bits/stdc++.h>
using namespace std;
int n , a[101];
int dt[101] , dg[101]; // dt[i] = x , tong max cac phan tu tang dan tu 1 -> i bang x ; dg[i] = x , tong max cac phan tu giam dan tu i -> n-1 bang x
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		dt[i] = a[i];
		dg[i] = a[i];
	}
}
int res(){
	// quy hoach dong tang
	for(int i = 1 ; i < n ; i++){
		for(int j = 0 ; j < i ; j++){
			if(a[i] > a[j]) dt[i] = max(dt[i] , dt[j] + a[i]);
		}
	}
	// quy hoach dong giam
	for(int i = n-2 ; i >= 0 ; i--){
		for(int j = i+1 ; j < n ; j++){
			if(a[i] > a[j]) dg[i] = max(dg[i] , dg[j] + a[i]);
		}
	}
	// ket qua
	int ans = dt[0] + dg[0] - a[0];
	for(int i = 1 ; i < n ; i++){
		ans = max(ans , dt[i] + dg[i] - a[i]);
	}
	return ans;	
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

