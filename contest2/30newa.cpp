#include<bits/stdc++.h>
using namespace std;
int n , p , s , DEM , sum , k;
int a[201];
void snt(){ // sang nguyen to
	for(int i = 1 ; i <= 200 ; i++) a[i] = 1;
	for(int i = 2 ; i <= 200 ; i++){
		if(a[i] == 1){
			for(int j = 2 ; i * j <= 200 ; j++)
			a[i*j] = 0;
		}
	}
}
void Try(int p){
	for(int i = p + 1 ; i <= s ; i++){
		if(a[i] == 1){
			for(int j = 0 ; j <= 1 ; j++){
				sum = sum + j * i;
				if(j == 1) k++;
				if(p > s) return ;
				if(sum == s && k == n) DEM++;
				else {
					Try(i);
					sum = sum - j * i;
					if(j == 1) k--;
				}
			}
		}
	}
}
int main(){
	int T;
	cin >> T;
	snt();
	while(T--){
		cin >> n >> p >> s;
		DEM = 0;
		sum = 0;
		k = 0;
		Try(p);
		cout << DEM << endl;
	}
}

