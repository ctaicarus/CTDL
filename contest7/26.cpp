#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , ans[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
	}
}
void res(){
	for(int i = 0; i < n ; i++){
		int d = 0;
		for(int j = i ; j >= 0 ; j--){
			if(a[j] <= a[i]) d++; else if(a[j] > a[i]) break;
		}
		ans[i] = d;
	}
	for(int i = 0 ; i < n ; i++) cout << ans[i] << " ";
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	}
}

