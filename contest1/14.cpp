#include<bits/stdc++.h>
using namespace std;
int n , k;
bool check(int n , int a[]){
	for(int i = 1 ; i <= k ; i++)
	if(a[i] == n) return false; // co mat
	return true;
}
int res(int a[] , int b[]){
	int d = 0;
	for(int i = 1 ; i <= k ; i++){
		if(check(b[i] , a)) d++;
	}
	return d;
}
bool checkArr(int a[]){
	for(int i = 1 ; i <= k ; i++){
		if(a[i] != n - k + i) return false;
	}
	return true;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		int a[k+1] , b[k+1];
		for(int i = 1 ; i <= k ; i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		int i = k;
		while(b[i] == n - k + i){
			i--;
		}
		b[i]++;
		for(int j = i + 1 ; j <= k ; j++){
			b[j] = b[j-1] + 1;
		}
		if(checkArr(a)) cout << k << endl;else cout << res(a , b) << endl;
		
	}
}

