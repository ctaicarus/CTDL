#include<bits/stdc++.h>
using namespace std;
int n , a[1001];
void init(){
	cin >> n ;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
bool check(){
	for(int i = 0 ; i < n-1 ; i++){
		if(a[i] < a[i+1]) return true;
	}
	return false;
}
void res(){
	next_permutation(a , a+n);
	for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
	cout << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		if(check()) res(); else {
			for(int i = 0 ; i < n ; i++) cout << i+1 << " ";
			cout << endl;
		}
	}
}
