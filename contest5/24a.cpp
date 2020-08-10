#include<bits/stdc++.h>
using namespace std;
int n , m;
int res(int n , int m){
	if(n == 0 && m == 0) return 0;
	if(n == 0 && m != 0) return 1;
	if(n != 0 && m == 0) return 1;
	if(n != 1 && m != 1) return res(0 , m) + res(n , 0) + res(n-1 , m) + res(n , m-1);
	if(n == 1 && m != 1) return res(n , 0) + res(n-1 , m) + res(n , m-1);
	if(n != 1 && m == 1) return res(0 , m) + res(n-1 , m) + res(n , m-1);
	if(n == 1 && m == 1) return res(n-1 , m) + res(n , m-1);		
}
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		cout << res(n , m) << endl;
	}
}

