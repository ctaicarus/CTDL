#include<bits/stdc++.h>
using namespace std;
void sinh(int a[]){
	int i = 100;
	while(i >= 1 && a[i] != 0) {
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}
long long tong(int a[]){
	long long s = 0;
	for(int i = 1 ; i <= 100 ; i ++)
	  s = s * 10 + a[i];
	return s;
}
void res(int n , int a[]){
	int d = 0;
	while(1){
		sinh(a);
		if(tong(a) <= n) d++; else break;
	}
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a[101];
		for(int i = 1 ; i <= 100 ; i++) a[i] = 0;
		res(n , a);
	}
}
