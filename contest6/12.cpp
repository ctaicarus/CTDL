#include<bits/stdc++.h>
using namespace std;
int n , k , a[100001];
void init(){
	cin >> n >> k;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void res(){
	sort(a+1 , a+1+n);
	for(int i = n ; i >= n-k+1 ; i--) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}

