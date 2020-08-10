#include<bits/stdc++.h>
using namespace std;
int n , m , a[21][21] , vs[21][21] , res , s ;
void DFS(int u){
	res = max(res , s );
	for(int v = 0 ; v < n ; v++){
		if(vs[u][v] == 1 && a[u][v] == 1) {
			vs[u][v] = 0;
			vs[v][u] = 0;
			s++;
			DFS(v);
		    vs[u][v] = 1;
			vs[v][u] = 1;
			s--;
		}
	}
}
void init(){
	cin >> n >> m;
	res = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			a[i][j] = 0;
			vs[i][j] = 1;
		}
	}
	int x , y;
	for(int i = 1 ; i <= m ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
	    for(int i = 0 ; i < n ; i++) {
	    	s = 0;
	    	DFS(i);
		}
		cout << res << endl;
	}
}

