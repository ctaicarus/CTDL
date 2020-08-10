#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void res(){
	int ans = a[1] + a[2];
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++){
			if(abs(ans) > abs(a[i] + a[j]) ) ans = a[i] + a[j];
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

