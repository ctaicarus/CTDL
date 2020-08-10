#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
void snt(){
	a[1] = 0;
	for(int i = 2 ; i <= 1000000 ; i++) a[i] = 1;
	for(int i = 2 ; i <= 1000000 ; i++){
		if(a[i] == 1){
			for(int j = 2 ; i * j <= 1000000 ; j++)
			a[i*j] = 0;
		}
	}
}
int res(){
	for(int i = 2 ; i <= n/2 ; i++){
		if(a[i] == 1 && a[n-i] == 1) return i;
	}
	return -1;
}
int main(){
	int T;
	cin >> T;
	snt();
	while(T--){
	   cin >> n;
	   if(res() != -1) cout << res() << " " << n - res() << endl ; else cout << res() << endl;
	}
}

