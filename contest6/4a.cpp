#include<bits/stdc++.h>
using namespace std;
int n , m , a[1000001] , b[1000001] , c[2000001];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	for(int i = 1 ; i <= m ; i++) cin >> b[i];
	sort(a+1 , a+1+n);
	sort(b+1 , b+1+m);
}
int BinarySearch(int left, int right , int x){ // tim kiem x co trong mang a hay khong
	if (left > right) return -1;
	int mid = (left + right) / 2;
	if (x == a[mid]) 
		return 1;
	if (x < a[mid]) 
		return BinarySearch(left , mid-1 , x);
	if (x > a[mid]) 
		return BinarySearch(mid+1 , right , x);
} 
void giao(){
	for(int i = 1 ; i <= n ; i++) c[i] = a[i];
	for(int i = 1 ; i <= m ; i++) c[n+i] = b[i];
	sort(c + 1 , c + 1 + n + m);
	cout << c[1] << " ";
	for(int i = 2 ; i <= n + m ; i++){
		if(c[i] != c[i-1]) cout << c[i] << " ";
	}
	cout << endl;
}
void hop(){
	for(int i = 1 ; i <= m ; i++){
		if( BinarySearch(1 , n , b[i]) == 1) cout << b[i] << " ";
	}
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   giao();
	   hop();
	}
}

