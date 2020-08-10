#include<bits/stdc++.h>
using namespace std;
int n , m , a[1001][1001] , ans;
bool ok;
void init(){
	cin >> n >> m;
	ans = INT_MAX;
	ok = false;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= m ; j++) cin >> a[i][j];
}

void Try(int i , int j , int d){
	if(i == n && j == m) {
		ans = min(ans , d);
		ok = true;
		return;
	}
	if(ok && d > ans) return; 
	if(i < 1) return;
	if(j < 1) return;
	if(i > n) return;
	if(j > m) return;
	for(int z = 0 ; z <= 1 ; z++){
		if(z == 0) Try(i , j + a[i][j] , d+1);
		if(z == 1) Try(i + a[i][j] , j , d+1);
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   Try(1 , 1 , 0);
	   cout << ans << endl;
	}
}

