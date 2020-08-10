#include<bits/stdc++.h>
using namespace std;
int n , s[2000] , f[2000]; // bat dau , ket thuc
void sapxep(){
	for(int i = 0 ; i < n ; i++){ // sap xep 2 mang theo thoi gian ket thuc tang dan
		for(int j = i + 1 ; j < n ; j++){
			if(f[i] > f[j]){
				swap(f[i] , f[j]);
				swap(s[i] , s[j]);
			}
		}
	}
}
int res(){
	int d = 1; // cong viec ket thuc som nhat
	int i = 0; // bat dau tu cong viec ket thuc som nhat
	for(int j = 1 ; j < n ; j++){
		if(s[j] >= f[i] ){ // thoi gian bat dau > thoi gian ket thuc
			d++;
			i = j;
		}
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 0 ; i < n ; i++) cin >> s[i];
		for(int i = 0 ; i < n ; i++) cin >> f[i];
		sapxep();
		cout << res() << endl;
	}
}

