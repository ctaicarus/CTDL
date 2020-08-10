#include<bits/stdc++.h>
using namespace std;
 
int a[1001][1001];
int n , m, u , v , f , l;
bool Free[1001] , ok;
int e[1001];
queue<int>s;
void init(){
	ok = false;
    cin >> n >> m >> f >> l;
    for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) a[i][j]=0;
    for (int i=1; i<=m; i++){
        cin >> u>> v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for (int i=1; i<=n; i++) Free[i] = true;
} 
void BFS(int f , int k ){
	s.push(f);
	Free[f] = false;
	if(ok) return;
	for(int i = 1 ; i <= n ; i++){
		if(Free[i] && a[f][i] == 1) {
			Free[i] = false;
			s.push(i);
			if(i == l) {
				ok = true;
                return;
			}
		}
	}
	BFS(z);
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		BFS(f,0);
		cout << endl;
	}
}
 

