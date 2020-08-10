#include<bits/stdc++.h>
using namespace std;
long long n , m , a[100001] , b[100001];
int d1[100001] , d2[100001];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		d1[a[i]] = 0;
	}
	sort(a+1,a+1+n);
	for(int i = 1 ; i <= m ; i++){
		cin >> b[i];
		d2[b[i]] = 0;
	}
	sort(b+1,b+1+m);
	for(int i = 1 ; i <= n ; i++){
		d1[a[i]]++;
	}
	for(int i = 1 ; i <= m ; i++){
		d2[b[i]]++;
	}
}
void hop(){
	long long c[n+m+1];
	for(int i = 1 ; i <= n ; i++){
		c[i] = a[i];
	}
	for(int i = 1 ; i <= m ; i++){
		c[i+n] = b[i];
	}
	sort(c+1,c+1+n+m);
	cout << c[1] << " ";	
	for(int i = 2 ; i <= n + m ; i++){
		if(c[i] != c[i-1]) cout << c[i] << " ";
	}
	cout << endl;
}
void giao(){
	for(int i = 1 ; i <= n ; i++){
		if(d1[a[i]] != 0 && d2[a[i]] != 0) cout << a[i] << " ";
	}
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		hop();
		giao();
	}
}

