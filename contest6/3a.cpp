#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , b[1000001];
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b , b + n);
	int d = 0;
	for(int i = 0 ; i < n ; i++){
		if(a[i] != b[i]) d++;
	}
	cout << d/2 << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}

