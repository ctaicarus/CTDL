#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] , l , r;
void init(){
	cin >> n;
	bool c[1000001];
	for(int i = 1 ; i <= 1000000 ; i++) c[i] = false;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		c[a[i]] = true;
	}
	sort(a+1 , a+1+n);
	l = a[1];
	r = a[n];
	int d = 0;
	for(int i = l+1 ; i <= r-1 ; i++)
	if(!c[i]) d++;
	cout << d << endl;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	}
}

