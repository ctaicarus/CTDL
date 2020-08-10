#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	sort(a+1,a+1+n);
}
int res(){
	for(int i = 2 ; i <= n ; i++){
		if(a[i] != a[1]) return a[i];
	}
	return -1;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   if(res() != -1) cout << a[1] << " " << res() << endl; else cout << res() << endl;
	}
}

