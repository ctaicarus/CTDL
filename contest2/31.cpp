#include<bits/stdc++.h>
using namespace std;
int x , n , m;
string name[101];
char a[10][10]; // ki tu
bool c[10][10]; // mang kiem tra
int dx[] = {-1 , -1 , -1 , 0 , 0 , 1 , 1 , 1};
int dy[] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};
bool ok;
string res;
void init(){
	ok = false;
	res = "";
	for(int i = 1 ; i <= x ; i++){
		cin >> name[i];
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= m ; j++){
			cin >> a[i][j];
			c[i][j] = true;
		}
	}
}
bool check(int i , int j){ // thoa man toa do
	if(i >= 1 && j >= 1 && i <= n && j <= m ) return true; else return false;
}
bool belongName(){ // thuoc mang Name
	for(int i = 1 ; i <= x ; i++){
		if(res == name[i] ) {
			return true;
		}
	}
	return false;
}
void Try(int i , int j ){
	c[i][j] = false;
	res = res + a[i][j];
	if(belongName()) {
		cout << res << " ";
		ok = true;
	}
	for(int z = 0 ; z < 8 ; z++){
		int xx = i + dx[z];
		int yy = j + dy[z];
		if(c[xx][yy] && check(xx , yy)){
			Try(xx , yy);
		}	
	}
	res.erase(res.size() - 1 , 1);
	c[i][j] = true;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> x >> n >> m;
		init();	
		for(int i = 1 ; i <= n ; i++){
		    for(int j = 1 ; j <= m ; j++){
			    Try(i , j);
		   }
	    }
	    if(ok == false) cout << "-1";
	    cout << endl;
	}
}

