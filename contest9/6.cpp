#include<bits/stdc++.h>
using namespace std;
int n , v , u , a[10001][10001] , x , y;
bool c[10001];
void init(){
	cin >> n >> v >> u;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) c[i] = true;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}
void dfs(int u){
	c[u] = false;
	cout << u << " ";
	for(int i = 1 ; i <= n ; i++){
		if(a[u][i] == 1 && c[i]) {
			dfs(i);
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   dfs(u);
	   cout << endl;
	}
}

