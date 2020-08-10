#include<iostream>
#include<math.h>
using namespace std;
long long tinh(long long n , long long k){
	long long x = pow(2 , n-1);
	if(k == x) return n;
	if(k < x) return tinh(n-1 , k);
	return tinh(n-1 , k-x);
}	
int main(){
	int T;
	cin >> T;
	long long n , k;
	while(T--){
	   cin >> n >> k;
	   cout << tinh(n , k)<<endl;
	}
}
