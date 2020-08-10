#include<bits/stdc++.h>
using namespace std;
int a[1001][1001] , u , v , tplt ;
bool c[1001] , e[1001][1001];
void init(){
	cin >> u >> v;
	int x , y;
	for(int i = 1 ; i <= u ; i++) for(int j = 1 ; j <= u ; j++) {
		a[i][j] = 0;
		e[i][j] = true;
	}
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
void bfslt(int x , int f , int l){
	c[x] = false;
	queue<int>s;
	s.push(x);
	while(!s.empty()){
		int t = s.front();
		s.pop();
		for(int i = 1 ; i <= u ; i++){
		    if(c[i] && a[t][i] == 1 && e[t][i] && e[i][t]) {
		    	c[i] = false;
		    	s.push(i);
			}
	    }
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
		for(int j = i+1 ; j <= u ; j++){
			if(a[i][j] == 0) continue;
			e[i][j] = false; e[j][i] = false;
			for(int z = 1 ; z <= u ; z++) c[z] = true;
			int d = 0;
			for(int z = 1 ; z <= u ; z++){
				if(c[z]){
					bfslt(z , i , j);
					d++;
				}
			}
			if(d > tplt) cout << i << " " << j << " ";
			e[i][j] = true; e[j][i] = true;
		}
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
