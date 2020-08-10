#include<bits/stdc++.h>
using namespace std;
long long n , a[1000001] , b[1000001];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(int i = 1 ; i <= n ; i++) cin >> a[i];
		for(int i = 1 ; i < n ; i++) cin >> b[i];
		bool c = false;
		for(int i = 1 ; i < n ; i++){
			if(a[i] != b[i]) {
				c = true;
				cout << i << endl;
				break;
			}
		}
		if(!c) cout << n << endl;
	}
}

