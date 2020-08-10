#include<bits/stdc++.h>
using namespace std;
int n , m , a[1000001];
void init(){
	cin >> n >> m;
	for(int i = 0 ; i < n + m ; i++) cin >> a[i];
	sort(a,a+n+m);
	for(int i = 0 ; i < n + m ; i++) cout << a[i] << " ";
	cout << endl;	
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}

