#include<bits/stdc++.h>
using namespace std;
long long n , m , p = pow(10 , 9) + 7;
long long nghich(long long n){
	long long s = 0;
	while(n){
		int x = n % 10;
		s = s * 10 + x;
		n /= 10;
	}
	return s;
}
long long modulo(long long n , long long m){
	if(m == 0) return 1;
	if(m == 1) return n % p;
	long long ans = modulo(n , m/2);
	if(m % 2 == 0) return ans * ans % p; else return ( (ans * ans) % p * n ) % p;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		m = nghich(n);
        cout << modulo(m , n) << endl;
	}
}

