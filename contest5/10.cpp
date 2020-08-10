#include<bits/stdc++.h>
using namespace std;
int n , m , a[1001][1001];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i <= n ; i++) a[i][0] = INT_MAX;
	for(int j = 0 ; j <= m ; j++) a[0][j] = INT_MAX;
}
int res(){
	a[0][0] = 0;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			a[i][j] = a[i][j] +  min(a[i-1][j-1],min(a[i-1][j], a[i][j-1])) ;
		}
	}
	return a[n][m];
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

