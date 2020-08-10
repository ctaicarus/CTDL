#include<bits/stdc++.h>
using namespace std;
int n , v , a[1001][1001] , f , l;
bool c[1001] , ok;
int e[1001];
void init(){
	ok = false;
	cin >> n >> v >> f >> l;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) c[i] = true;	
	int x , y;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
	}
}
void res(int f , int k){
	if(ok) return;
	e[k] = f;
	c[f] = false;
	if(f == l) {
		ok = true;
		for(int i = 1 ; i <= k ; i++) cout << e[i] << " ";
		return;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && a[f][i] == 1) res(i,k+1);
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res(f,1);
	   if(ok == false) cout << "-1";
	   cout << endl;
	}
}

