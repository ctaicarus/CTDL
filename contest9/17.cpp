#include<bits/stdc++.h>
using namespace std;
int n , m , a[1001][1001] , d;
bool c[1001] , ok;
void init(){
	cin >> n >> m;
	ok = false;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) c[i] = true;
	for(int i = 1 ; i <= m ; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = 1;
	}
}
void dfs(int f){
	c[f] = false;
	d++;
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && a[f][i] == 1) {
			dfs(i);
		}
	}
}

bool check(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++) c[j] = true;
		d = 0;
	   	dfs(i);
	   	if(d < n) return false;
	}
	return true;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if(check()) cout << "YES\n";else cout << "NO\n";
	}
}

