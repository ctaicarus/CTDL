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
void bfs(int f){
	c[f] = false;
	d++;
	queue<int>s;
	s.push(f);
	while(!s.empty()){
		int x = s.front();
		s.pop();
		for(int i = 1 ; i <= n ; i++){
			if(c[i] && a[x][i] == 1) {
				c[i] = false;
				d++;
				s.push(i);
			}
		}
	}
}

bool check(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++) c[j] = true;
		d = 0;
	   	bfs(i);
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

