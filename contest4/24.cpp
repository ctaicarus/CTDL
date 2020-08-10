#include<bits/stdc++.h>
using namespace std;
long long n;
long long p = 123456789;
long long modulo(long long a , long long b){ // a ^ b
	if(b == 0) return 1;
	if(b == 1) return a % p;
	long long ans = modulo(a , b/2);
	if(b % 2 == 0) return ans * ans % p; else return(ans * ans % p) * a % p;
}
long long res(long long n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(n >= 3) return modulo(2 , n - 1) ;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n; 
		cout << res(n) << endl; // in ra 2 ^ (n-1)
	}
}


