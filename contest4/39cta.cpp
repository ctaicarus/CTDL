#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , b[1000001];
int init(){
	cin >> n ;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	for(int i = 1 ; i <= n-1 ; i++) {
		cin >> b[i];
	}	
    for(int i = 1 ; i <= n-1 ; i++){
    	if(a[i]!=b[i]) return i;
	}
	return n;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		cout << init() << endl;
	}
}
