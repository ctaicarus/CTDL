#include<bits/stdc++.h>
using namespace std;
long long p = pow(10 , 9) + 7;
long long a[11][11] , n , k;
 
void init(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> a[i][j];
		}
	}
} 
void nhan (long long a[11][11]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                a[i][j] = (a[i][j] + (a[i][k] * a[k][j]) % p) % p;
            }
        }
    }
}
 
long long power() {
   for(int i = 1 ; i < n ; i++)
      nhan(a);
}
void display(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
} 
int main() {
    int T;
    cin >> T;
    while(T--){
    	init();
    	power();
    	display();
	}
}
