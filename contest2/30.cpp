#include<bits/stdc++.h>
using namespace std;
int a[201];
int n , p , s , DEM , sum , nt[201] , c[201] , k , x , res[201] , vt ;
void snt(){ // sang nguyen to
	for(int i = 1 ; i <= 200 ; i++) a[i] = 1;
	for(int i = 2 ; i <= 200 ; i++){
		if(a[i] == 1){
			for(int j = 2 ; i * j <= 200 ; j++)
			a[i*j] = 0;
		}
	}
}
void init(){
	cin >> n >> p >> s;
		x = 1;
        for(int i = p ; i < s ; i++){
        	if(a[i] == 1) nt[x++] = i;
		}
		x--;
//		for(int i = 1 ; i <= x ; i++) cout << nt[i] << " "; cout << endl;
		k = 0;
		sum = 0;
		DEM = 0;
		vt = 1;
}
void Try(int i , int k , long long sum){
	if(k == n ){
		if(sum == s) {
			DEM++;
			for(int z = 1 ; z < i ; z++){
				if(c[z] == 1) {
					res[vt++] = nt[z];
				}
			}
			return ;
		}
		return ;
	}
	if(i > x) return ;
    for(int j = 1 ; j >= 0 ; j-- ){
    	c[i] = j;
    	if(j == 0){
			Try(i+1 , k , sum);
		}
    	if(j == 1){
    		Try(i+1 , k+1 , sum + nt[i]);
		}
	}
}
int main(){
	int T;
	cin >> T;
	snt();
	while(T--){
		init();
		Try(1 , k , sum);
		cout << DEM << endl;
		int d = 0;
		for(int i = 1 ; i < vt ; i++){
			cout << res[i] << " ";
			d++;
			if(d == n){
				d = 0;
				cout << endl;
			}
		}
	
	}
}

