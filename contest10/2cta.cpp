#include<bits/stdc++.h>
using namespace std;
int u , v , a[1001][1001] , d;
bool c[1001] ;
void init(){
	cin >> u >> v;
	for(int i = 1 ; i <= u ; i++){
		c[i] = true;
		for(int j = 1 ; j <= u ; j++){
			a[i][j] = 0;
		}
	}
	for(int i = 1 ; i <= v ; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}
void dfs(int i){
	c[i] = false;
	d++;
	for(int j = 1 ; j <= u ; j++){
		if(c[j] && a[i][j] == 1) dfs(j );
	}
}
bool res(){
	for(int i = 1 ; i <= u ; i++){
		for(int j = 1 ; j <= u ; j++) c[j] = true;
		d = 0;
		dfs(i);
		if(d == u) return true;
	}
	return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if(res()) cout << "1\n"; else cout << "0\n";
	}
}

