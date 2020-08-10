#include<bits/stdc++.h>
using namespace std;
int a[1001][1001] , u , v , tplt ;
bool c[1001];
void init(){
	cin >> u >> v;
	int x , y;
	for(int i = 1 ; i <= u ; i++) for(int j = 1 ; j <= u ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= u ; i++) c[i] = true;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}
void dfs(int x){
	c[x] = false;
	for(int i = 1 ; i <= u ; i++){
		if(c[i] && a[x][i] == 1) dfs(i);
	}
}
int TPLT(){
	int d = 0;
	for(int i = 1 ; i <= u ; i++){
		if(c[i]) {
			d++;
			dfs(i);
		}
	}
	return d;
}
void res(){
	tplt = TPLT();
	for(int i = 1 ; i <= u ; i++){
		for(int j = 1 ; j <= u ; j++) c[j] = true;
		c[i] = false;
		int d = 0;
		for(int j = 1 ; j <= u ; j++){
			if(c[j]) {
				d++;
				dfs(j);
			}
		}
		if(d > tplt) cout << i << " ";
	}
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		res();
	}
}
