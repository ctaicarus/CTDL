#include<bits/stdc++.h>
using namespace std;
int n , a[1001][1001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= n ; j++) cin >> a[i][j];
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(a[i][j] == 1) cout << j << " ";
		}
		cout << endl;
	}
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	}
}

