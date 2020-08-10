#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void res(){ 
	int m = 0;
	int ans = 0;
	for(int i = 1 ; i <= n ; i++){ // chieu rong
		for(int j = 1 ; j <= n-i+1 ; j++){ // cot bat dau 
		    int h = a[j];
			for(int k = j ; k <= j + i - 1; k++){ // lay so cot
				h = min(h , a[k]);
			}
			ans = max(ans , i*h);
		}
	}
	cout << ans << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}

