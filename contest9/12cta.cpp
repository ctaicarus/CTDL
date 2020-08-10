#include<bits/stdc++.h>
using namespace std;
int  n , v , u , k, a[1001][1001];
bool c[1001] ;
int e[1001] ;
void init(){
	cin >> n >> v >> u >> k;
	for(int i = 1 ; i <= n ; i++){
		c[i] = true;
		e[i] = 0;
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

void bfs(int u){
	queue<int>s;
	s.push(u);
	c[u] = false;
	while(!s.empty()){
		int x = s.front();
		s.pop();
		for(int i = 1 ; i <= n ; i++) {
			if(c[i] && a[x][i] == 1){
				c[i] = false;
				e[i] = x; // truy vet
				s.push(i);
			}
		}
	}
}
void res(){
	int i = k;
	stack<int>s;
	s.push(k);
	while(e[i] != u){
		s.push(e[i]);
		i = e[i];
	}
	s.push(u);
	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
}
int main(){
	int T;
    cin >> T;
	while(T--){
	   init();
	   bfs(u);
	   res();
	   cout << endl;
	}
}

