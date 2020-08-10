#include<bits/stdc++.h>
using namespace std;
int n , m , a[1000] , b[1000] , c[1000];
void res(){
	for(int i = 0 ; i <= n + m - 2 ; i++) c[i] = 0; // mang ket qua
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			c[i + j] = c[i + j] + a[i]*b[j];
		}
	}
	for(int i = 0 ; i <= n + m - 2 ; i++) cout << c[i] << " ";
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		for(int i = 0 ; i < n ; i++) cin >> a[i];
		for(int i = 0 ; i < m ; i++) cin >> b[i];
		res();
		cout << endl;
	}
}


