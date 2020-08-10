#include<bits/stdc++.h>
using namespace std;
int n , m ;
int a[1001][1001];
bool c[1001]; // mang check
int bac[1001];
/*
so mau la m , ban dau m = 0;
sap xep dinh the ds bac giam dan
neu chua to mau het m++; gan  m cho dinh chua to gan nhat , va cac dinh k ke vs dinh day
*/
void init(){// sap xep cac dinh theo ds bac giam dan
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) a[i][j] = 0;
	for(int i = 1 ; i <= n ; i++) {
		c[i] = true;
		bac[i] = 0;
	}
	for(int i = 1 ; i <= m ; i++){
		int x , y;
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) if(a[i][j] == 1) bac[i]++;
	sort(bac , bac + n + 1); // sap xep bac theo tang dan
	
}
bool res(){
	int d = 0;
	for(int i = n ; i >= 1 ; i--){ // bac tang dan => so dinh khong ke voi dinh i giam dan
        if(c[i]){
        	d = d + 1;
        	c[i] = false;
        	for(int j = 1 ; j <= n ; j++){
        		if(c[j] && a[i][j] != 1 && a[j][i] != 1) {
        			c[j] = false; // j khong ke i , nen j cung mau voi i
				}
			}
		}
	}
	if(d == 2) return true; else return false; // to mau bang 2 mau => 2 phia
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if( res() ) cout << "YES\n"; else cout << "NO\n";
	}
}

