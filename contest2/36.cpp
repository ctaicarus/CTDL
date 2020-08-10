#include<bits/stdc++.h>
using namespace std;
int a[6] , b[6] ; 
bool c[6];
bool ok ; // kiem tra
void init(){
	ok = false;
	for(int i = 1 ; i <= 5 ; i++){
		cin >> b[i];
		a[i] = b[i];
		c[i] = true;
	}
}
void Try(int i , long long sum) { // tong
	if(i >= 5) {
		if(sum == 23) ok = true;
		return ;
	}
	for(int j = 1 ; j <= 3 ; j++){ // + - *
		if(ok) break;
		if(j == 1) { // +
			Try(i+1 , sum + a[i+1]);
		}
		if(j == 2) { // -
			Try(i+1 , sum - a[i+1]);
		}
		if(j == 3) { // *
			Try(i+1 , sum * a[i+1]);
		}
	}
}
void step(int i){ // hoan vi
	if(i > 5) {
		Try(1 , a[1]);
	}
	for(int j = 1 ; j <= 5 ; j++)
	if(c[j]) {
		c[j] = false;
		a[i] = b[j];
		step(i+1);
		c[j] = true;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	    init();
	    step(1);
	    if(ok) cout <<"YES\n" ; else cout <<"NO\n";
	}
}

