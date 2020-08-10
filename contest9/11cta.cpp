#include<bits/stdc++.h>
using namespace std;
int u , v , f , l , a[1001][1001] , e[1001];
bool c[1001] , ok;
void init(){
	ok = false;
	cin >> u >> v >> f >> l;
	for(int i = 1 ; i <= u ; i++){
		e[i] = 0;
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
void dfs(int f,int k){
	c[f] = false;
	e[k] = f;
	if(f == l) {
		ok = true;
		for(int z = 1 ; z <= k ; z++) cout << e[z] << " ";
	}
	for(int i = 1 ; i <= u ; i++){
		if(c[i] && a[i][f] == 1) dfs(i,k+1);
	}
}
int main(){
	int T; cin >> T;
	while(T--){
		init();
		dfs(f,1);
		if(!ok) cout << "-1";
		cout << endl;
	}
}
