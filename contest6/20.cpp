#include<bits/stdc++.h>
using namespace std;
int n , k , a[1000001];
void init(){
	cin >> n >> k;
	for(int i = 0 ;i < n ; i++) cin >> a[i];
	sort(a , a+n);
}
void res(){
	int d = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n && a[j] - a[i] < k ; j++){
			if(a[j] - a[i] < k) d++ ; 
		}
	}
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}

