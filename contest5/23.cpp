#include<bits/stdc++.h>
using namespace std;
int a[1001] , n ;
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
int res(){
	int d = 0;
	for(int i = 1 ; i < n ; i++){
		for(int j = 0 ; j < i ; j++){
			if(a[i] < a[j]) {
				d++;
				break;
			}
		}
	}
	return min(d , n-d);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

