#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
int left(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++){
			if(a[i] > a[j]) return i;
		}
	}
}
int right(){
	for(int i = n ; i >= 1 ; i--){
		for(int j = i-1 ; j >= 1 ; j--){
			if(a[i] < a[j]) return i;
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << left() << " " << right() << endl;
	}
}

