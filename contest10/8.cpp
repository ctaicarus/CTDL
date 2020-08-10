#include<bits/stdc++.h>
using namespace std;
int u , v , f , a[1001][1001] , e[1001];
bool c[1001], ok;
queue<int>s;
void init(){
	cin >> u >> v >> f;
	ok = false;
	for(int i = 1 ; i <= u ; i++){
		c[i] = true;
		e[i] = 0;
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
void dfs(int f,int d){
	c[f] = false;
	s.push(f);
	if(d == u){
		ok = true;
		while(!s.empty()){
			int x = s.front(); s.pop();
			int y = s.front(); s.pop();
			cout << x << " " << y << endl;
		}
		return;
	}
	for(int i = 1 ; i <= u ; i++){
		if(c[i] && a[i][f] == 1){
			e[f] = i;
			s.push(i);
			dfs(i,d+1);
		}
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		dfs(f,1);
		if(!ok) cout << "-1\n";
	}
}
