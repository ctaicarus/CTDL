#include<bits/stdc++.h>
using namespace std;
long long n , a[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void res(){ 
	int d = 0;
	for(int i = 1 ; i <= n - 1 ; i++){
		long long x = a[i+1];
		long int vt = i+1; // vi tri
		for(int j = i+1 ; j <= n ; j++){ // tim min
			if(a[j] < x) {
				x = a[j];
				vt = j;
			}
		}
		if(a[i] > x){
			d++;
			swap(a[i] , a[vt]);
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


