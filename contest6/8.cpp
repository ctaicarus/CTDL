#include<bits/stdc++.h>
using namespace std;
int n , m , a[100001] , b[100001];
void init(){
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
	for(int j = 0 ; j < m ; j++) cin >> b[j];
	sort(a , a+n);
	sort(b , b+m);
}
void res(){
	int d = 0;
	for(int i = 0 ; i < n ; i++) {
		int x = a[i];
		if(x == 0 || x == 1) continue; else{
			int j = 1;
			while(b[j] < x && j < m){
				j++;
			}
			d = d + (m-j+1);
		}
	}
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		res();
	}
}

