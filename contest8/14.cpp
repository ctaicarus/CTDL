#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
bool sochuso(int n){ 
	int d = 0;
	while(n){
		d++;
		n/=10;
	}
	if(d % 2 == 0) return true; else return false;
}
bool doixung(int n){
	int sum = 0 , N = n;
	while(n){
		int x = n % 10;
		sum = sum * 10 + x;
		n /= 10;
	}
	if(sum == N) return true; else return false;
}
bool forfive(int n){
	while(n){
		int x = n % 10;
		if(x != 4 && x != 5) return false;
		n /= 10;
	}	
	return true;
}
void init(){
	
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   cin >> n;
	   if(doixung(n)) cout << "1\n";else cout <<"0\n";
	
	}
}

