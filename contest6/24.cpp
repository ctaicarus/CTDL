#include<bits/stdc++.h>
using namespace std;
int n , x , a[1000001];
void init(){
	int vt;
	cin >> n >> x;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
		if(a[i] == x) vt = i;
	}
	cout << vt << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}

