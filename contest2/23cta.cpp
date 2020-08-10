#include<bits/stdc++.h>
using namespace std;
int n, a[1001][1001];
bool c[1001][1001];
bool ok;
void init(){
	cin >> n;
	ok = false;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++){
		cin >> a[i][j];
		c[i][j] = true;
	}
	c[1][1] = false;
}
void Try(int i , int j, string s){
	if(i == n && j == n) {
		cout << s << " ";
		ok = true;
	}
		if( i+1 <= n && a[i+1][j] == 1 && c[i+1][j]) {
			c[i+1][j] = false;
			Try(i+1 , j , s + 'D');
			c[i+1][j] = true;
		}
		if( j+1 <= n && a[i][j+1] == 1 && c[i][j+1]){
			c[i][j+1] = false;
			Try(i , j+1 , s + 'R');
			c[i][j+1] = true;
		}
		if( j-1 >= 1 && a[i][j-1] == 1 && c[i][j-1]) {
			c[i][j-1] = false;
			Try(i , j-1 , s + 'L');
			c[i][j-1] = true;
		}
		if( i-1 >= 1  && a[i-1][j] == 1 && c[i-1][j]) {
			c[i-1][j] = false;
			Try(i-1 , j , s + 'U');
			c[i-1][j] = true;
		}		
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		if(a[1][1] == 0 || a[n][n] == 0) cout << "-1\n"; 
		else {
			Try(1,1,"");
			if(!ok) cout << "-1";
			cout << endl;
		}
	}
}
