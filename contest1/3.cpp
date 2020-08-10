#include<bits/stdc++.h>
using namespace std;

int sinh( int a[], int n ){
	int i = n- 1; // xuat phat tu vi tri n-1
	while( i > 0 && a[i] > a[i+1] ) i--; // tìm a[i] dau tien > a[i+1]
	if( i > 0 ){
		int k = n; // xuat phat tu phan tu cuoi
		while( a[i] > a[k] ) k--; // tim a[k] dau tien thoa man a[k] > a[i]
		int t = a[i]; a[i] = a[k]; a[k] = t; // doi cho a[i] & a[k]
		int r = i + 1, s = n;
		while( r <= s ){ // dao vi tri cac phan tu a[i+1] toi a[n]
			int tg = a[r]; a[r] = a[s]; a[s] = tg;
			r++; s--;
		}
	}
}

void xuat( int a[], int n ){ // xuat tung hoan vi ra man hinh
	for( int i = 1; i <= n; i++ )
		cout << a[i] << " ";
	cout << endl;
}
 bool check(int n ,int a[]){
 	for(int i = 1 ; i <= n ; i++){
 		if(a[i] != n - i + 1) return false;
	}
	return true;
 }

int main(){
	int t;
	cin >> t;
	while(t--){
		int n , ok = 1;
		cin >> n;
		int a[n+1];
		bool c[n+1];
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
		}
		if(check(n , a)){
			for(int i = 1 ; i <= n ; i++){
				cout << i << " ";
			}
			cout << endl;
		} else {
			sinh(a , n );
			xuat(a , n);
		}
	}
}

