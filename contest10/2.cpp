#include<bits/stdc++.h>
using namespace std;
int a[101][101] , n , v;
bool ok , c[101];
void init(){
	cin >> n >> v;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= v ; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}

void dfs(int u , int d , int f){
	c[u] = false;
	d++;
	if(d == n && a[u][f] == 1) {
		ok = true;
		return;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && a[u][i] == 1) dfs(i , d + 1 , f);
	}
}
bool res(){
	ok = false;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++) c[j] = true;
		dfs(i , 0 , i);
		if(ok) return true; 
	}
	return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if(res) cout << "1\n" ; else cout << "0\n";
	}
}

