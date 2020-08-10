#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , ans[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
void res(){
	for(int i = 0 ; i < n ; i++){
		int MAX = a[i];
		int vt = i;
		for(int j = i + 1 ; j < n ; j++){
			if(a[j] > a[i]) {
				MAX = a[j];
				vt = j;
				break;
			}
		}
		if(MAX == a[i]) MAX = -1;
		int MIN = MAX;
		for(int j = vt + 1 ; j < n ; j++){
			if(a[j] < MIN) {
				MIN = a[j];
				break;
			}
		}
		if(MIN == MAX) {
			ans[i] = -1;
		} else ans[i] = MIN;
	}
	for(int i = 0 ; i < n ; i++) cout << ans[i] << " "; cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}

