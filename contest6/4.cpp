#include<bits/stdc++.h>
using namespace std;
long long n , m , a[100001] , b[100001];
int d1[100001] , d2[100001];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= 100000 ; i++){
		d1[i] = 0;
		d2[i] = 0;
	}
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		d1[a[i]]++;
	}
	for(int i = 1 ; i <= m ; i++){
		cin >> b[i];
		d2[b[i]]++;
	}
	sort(a+1 , a+1+n);
	sort(b+1 , b+1+m);
}
void hop(){
	long long c[n+m+1];
	for(int i = 1 ; i <= n ; i++){
		c[i] = a[i];
	}
	int vt = 1;
	for(int i = 1 ; i <= m ; i++){
		if(d2[b[i]]!=0 && d1[b[i]]==0) {
			c[n+vt] = b[i];
			vt++;
		}
	}
	vt--;
	sort(c+1,c+n+vt+1);	
	for(int i = 1 ; i <= n + vt ; i++){
			cout << c[i] << " ";
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

