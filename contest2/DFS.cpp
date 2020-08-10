#include<bits/stdc++.h>
using namespace std;
int n , m , u , a[100][100] , vs[100] , e[100];
void DFS(int u){
	vs[u] = 0;
	cout << u << " ";
	for(int v = 1 ; v <= n ; v++){
		if(vs[v] == 1 && a[u][v] == 1){
			e[v] = u;
			DFS(v);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u;
		for(int i = 1 ; i <= n ; i++){
			vs[i] = 1;
			for(int j = 1 ; j <= n ; j++){
				a[i][j] = 0;
			}
		}
		int x , y;
		for(int i = 1 ; i <= m ; i++){
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		DFS(u);
		cout << endl;
	}
}

