#include<bits/stdc++.h>
using namespace std;
int dx[] = {0 , 1};
int dy[] = {1 , 0};
int a[200][200];
int n , m;
int d = 0;
bool check ;

void init() {// nhap vao
    cin >> n >> m;
    d = 0;
    check = false;
    for(int i = 1 ; i <= n; i++) {
        for(int j = 1 ; j <= m; j++){
            cin >> a[i][j];
        }
    }
}
void solve(int x,int y){
    if(x == n && y == m){
        check = true;
        d++;
    }
    else
    for(int i = 0 ; i <= 1 ; i++){
        int xx = x + dx[i];
        int yy = y + dy[i];
        if( xx <= n && yy <= m ){
            solve(xx,yy);
        }
    }
}
int main(){
	int t;
	cin >> t;
	while(t--){
		init();
		if(a[1][1] == 0 ){
			cout << "-1";
		}
		else {
			solve(1 , 1);
		    if(check == false ) {
               cout << "-1";
            }
            cout << d;
		}
        cout << endl;
	}
}

