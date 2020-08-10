#include<bits/stdc++.h>
using namespace std;
long long f[93];
long long n , k;
char fibo(long long n , long long k){
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	if(k <= f[n-2]) return fibo(n-2 , k); else return fibo(n-1 , k - f[n-2]);
}
int main(){
	int T;
	cin >> T;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3 ; i <= 92 ; i++) f[i] = f[i-1] + f[i-2];
	while(T--){
		cin >> n >> k;
		cout << fibo(n , k) << endl;
	}
}

