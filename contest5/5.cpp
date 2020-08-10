#include<bits/stdc++.h>
 
using namespace std;
long long p = pow(10,9)+7;
long long a[1001];
void arr(){ // tinh toan bo 1000!
    a[0] = 1;
	a[1] = 1;
	for(int i=2;i<=1000;i++)
	a[i] = a[i-1] * i % p ;
}
long long modun(long long x){ // tinh x^(p-2) % p
	long long r = 1;
	long long m = p - 2;
	x = x % p;
	while(m >= 1){
		if(m % 2 > 0) r = r * x % p;
		x = x * x % p;
		m = m / 2;
	}
	return r; // so du
}
int main(){
	long long t,n,r;
	arr();
	cin>>t;
	while(t--){
		cin>>n>>r;
		long long Tu = a[n]; // tu so
		long long mau = a[r] * a[n-r] ; // mau so
		long long result = ( Tu * modun(mau) + p ) % p; // (Tu * pow(Mau , p - 2) + p ) % p
		cout<< result <<endl;
	}
	return 0;
} 
