#include<bits/stdc++.h>
using namespace std;
int n , x , a[10001];
void init(){
	cin >> n >> x;
	int d = 0;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		if(a[i] == x) d++;
	}
	if(d == 0) cout << "-1\n" ; else cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}

