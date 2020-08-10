#include<bits/stdc++.h>
using namespace std;

int a[200][200];
bool c[200][200]; // mang danh dau
string way;
int n;
bool check ;


void init() {// nhap vao
    cin >> n;
    check = false;
    for(int i = 1 ; i <= n; i++) {
        for(int j = 1 ; j <= n; j++){
            cin >> a[i][j];
            way = "";
            c[i][j] = true;
        }
    }
    c[1][1] = false;
}

void solve(int x,int y){
    if(x == n && y == n){
        check = true;
        cout << way <<" ";
    }  
    if(c[x + 1][y] && a[x + 1][y] == 1 && x + 1 <= n ){ // di xuong
    	way = way + 'D';
    	c[x + 1][y] = false;
    	solve(x + 1 , y);
    	c[x + 1][y]= true;
    	way.erase(way.size()-1,1);
	} 
	if(c[x][y - 1] && a[x][y - 1] == 1 && y - 1 >= 1){ // sang trai
       way = way + 'L';
       c[x][y - 1] = false;
       solve(x , y - 1);
       c[x][y - 1]= true;
       way.erase(way.size()-1,1);
	} 
	if(c[x][y + 1] && a[x][y + 1] == 1 && y + 1 <= n){ // sang phai
	   way = way + 'R';
       c[x][y + 1] = false;
       solve(x , y + 1);
       c[x][y + 1]= true;
       way.erase(way.size()-1,1);
    }   
	if(c[x - 1][y] && a[x - 1][y] == 1 && x - 1 >= 1 ){ // di len
	   way = way + 'U';
       c[x - 1][y] = false;
       solve(x - 1, y);
       c[x - 1][y]= true;
       way.erase(way.size()-1,1);
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
		    if(!check ) {
               cout << "-1";
            }
		}
        cout << endl;
	}
}

