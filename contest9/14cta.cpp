#include<bits/stdc++.h>
using namespace std;
int  n , v , f , l , a[1001][1001];
bool c[1001] , ok;
void init(){
	cin >> n >> v ;
	for(int i = 1 ; i <= n ; i++){
		c[i] = true;
		for(int j = 1 ; j <= n ; j++){
			a[i][j] = 0;
		}
	}
	int x , y;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}

void dfs(int f){
	if(ok) return;
	c[f] = false;
	if(f == l) {
		ok = true;
	}
	for(int i = 1 ; i <= n ; i++){
		if(c[i] && a[f][i] == 1) dfs(i);
	}
}
void res(){
	int t ;
	cin >> t;
	while(t--){
		cin >> f >> l;
		ok = false;
		for(int i = 1 ; i <= n ; i++) c[i] = true;
		dfs(f);
		if(ok) cout << "YES\n" ; else cout << "NO\n";
	}
}
int main(){
	int T;
    cin >> T;
	while(T--){
	   init();
	   res();
	}
}

