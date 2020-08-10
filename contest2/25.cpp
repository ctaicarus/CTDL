#include<bits/stdc++.h>
using namespace std;
bool check(int n , int k , int a[] , int b[]){
	int i = n;
	while(i >= 1 && b[i] != 0){
		b[i] = 0;
		i--;
	}
	if(i >=1) b[i] = 1;
	int s = 0;
	for(int j = 1 ; j <= i ; j++)
	   s = s + a[j] * b[j];
	if(s * 2 == k) return true; else return false;
}

bool res(int n , int k , int a[] , int b[]){
	if(k % 2 == 1) return false;
	for(int i = 1 ; i <= pow(2 , n) ; i++){
		if(check(n , k , a , b)) return true;
	}
	return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n , k = 0, ok = 1;
		cin >> n ;
		int a[n+1] , b[n+1];
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
			k = k + a[i];
			b[i] = 0;
		}
		if(res(n , k , a , b)) cout <<"YES\n" ; else cout <<"NO\n";
	}
}

