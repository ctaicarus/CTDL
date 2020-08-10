#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , ans[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
void res(){
	for(int i = 0 ; i < n ; i++){
	    int m = a[i];
		for(int j = i ; j < n ; j++){
			if(a[j] > a[i]){
				m = a[j];
				break;
			}
		}
		if(m != a[i]) ans[i] = m; else ans[i] = -1;
	}
	for(int i = 0 ; i < n ; i++) cout << ans[i] << " ";
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}

