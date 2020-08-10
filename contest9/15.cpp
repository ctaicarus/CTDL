#include<bits/stdc++.h>
using namespace std;
int n , v , a[1001][1001] ;
bool c[1001];
int ans , d;
void init(){
	cin >> n >> v ;
	ans = 0; // so lan dfs
	d = 0; // so dinh duyet
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) c[i] = true;	
	int x , y;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
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
void res(){
	while(d != n){
		int i = 1;
		while(i <= n && c[i] == false){ // tim dinh i dau tien chua xet , c[i] = true
			i++;
		}
		dfs(i);
		ans++;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	   cout << ans << endl;
	}
}

