#include<bits/stdc++.h>
using namespace std;
int dx[] = {1,0};
int dy[] = {0,1};
int a[200][200];
string way[100][100]; // duong di
int n;
bool check = false;

char direct(int dx,int dy) { // quyet dinh di nhu the nao
    if(dx == 0 && dy == 1) return 'R';
    else return 'D';
}

void init() {// nhap vao
    cin >> n;
    for(int i = 1 ; i <= n; i++) {
        for(int j = 1 ; j <= n; j++){
            cin >> a[i][j];
            way[i][j] = "";
        }
    }
}

void solve(int x,int y){
    if(x == n && y == n){
        check = true;
        cout << way[n][n] <<" ";
    }
    else
    for(int i = 0 ; i <= 1 ; i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(a[xx][yy] == 1 && xx <= n && yy <= n ){
            a[xx][yy]= 0;
            way[xx][yy]= way[x][y] + direct(dx[i],dy[i]);
            solve(xx,yy);
            a[xx][yy] = 1;
        }
    }
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		check = false;
		if(a[1][1] == 0 ){
			cout << "-1";
		}
		else {
			solve(1 , 1);
		    if(check == false ) {
               cout << "-1";
            }
		}
        cout << endl;
	}
}

