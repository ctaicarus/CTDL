#include<bits/stdc++.h>
using namespace std;
int n , m , a[100][100];
void init(){
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= m ; j++) cin >> a[i][j];
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		int x = rand() % m + 1;
		cout << a[i][x] << endl;
	}
}
int main(){
	int T;
	T = 1;
	int srand(time(NULL));
	while(T--){
	   init();
	   res();
	}
}

