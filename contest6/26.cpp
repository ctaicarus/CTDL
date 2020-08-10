#include<bits/stdc++.h>
using namespace std;
long long n , a[10001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void display(){
	for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
	cout << endl;
}
void res(){
	for(int i = 1 ; i <= n - 1 ; i++){
		long long x = a[i+1];
		long int vt = i+1;
		for(int j = i+1 ; j <= n ; j++){ // tim min
			if(a[j] < x) {
				x = a[j];
				vt = j;
			}
		}
		if(a[i] > x){
			swap(a[i] , a[vt]);
			cout << "Buoc " << i << ": " ;
			display();
		}
	}
}
int main(){
	int T;
	T = 1;
	while(T--){
		init();
		res();
	}
}

