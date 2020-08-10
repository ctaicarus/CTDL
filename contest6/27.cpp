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
	int k = 1;
	for(int i = 1 ; i <= n-1 ; i++){
		long int vt = i; // vi tri min
		for(int j = i+1 ; j <= n ; j++){ // tim min
			if(a[j] < a[vt]) {
				vt = j;
			}
		}
			swap(a[i] , a[vt]);
			cout << "Buoc " << k << ": " ;
			k++;
			display();
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

