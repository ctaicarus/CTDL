#include<bits/stdc++.h>
using namespace std;
int u , v , a[1001][1001];
int deg[2][1001];
void init(){
	cin >> u >> v;
	for(int i = 1 ; i <= u ; i++) for(int j = 1 ; j <= u ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= u ; i++) for(int j = 0 ; j <= 1 ; j++) deg[j][i] = 0;
	for(int i = 1 ; i <= v ; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = 1;
	}
}
void DEG(){
	for(int i = 1 ; i <= u ; i++){ // 0 ra , 1 vao
		for(int j = 1 ; j <= u ; j++){
			if(a[i][j] == 1) {
				deg[0][i]++;
				deg[1][j]++;
			}
		}
	}
}
int euler(){
	int d = 0;
	for(int i = 1 ; i <= u ; i++){
		if(deg[0][i] != deg[1][i]) d++ ; 
	}
	if(d == 0) return 1 ;  else return 0;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		DEG();
	    cout << euler() << endl;
	}
}
