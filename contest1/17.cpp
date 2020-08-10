#include<bits/stdc++.h>
using namespace std;
void sinh(int a[]){
	int i = 20;
	while(i >= 1 && a[i] != 0) {
		a[i] = 0;
		i--;
	}
	a[i] = 1;
}
long long tong(int a[]){
	long long s = 0;
	for(int i = 1 ; i <= 20 ; i ++)
	  s = s * 10 + a[i] * 9;
	return s;
}
long long res(int n , int a[]){
	while(1){
		sinh(a);
		if(tong(a) % n == 0) return tong(a);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int a[21];
		for(int i = 1 ; i <= 20 ; i++) a[i] = 0;
		cout << res(n , a) << endl;
	}
}
