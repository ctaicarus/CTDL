#include<bits/stdc++.h>
using namespace std;
int n , a[100001] , d[100001];
void init(){
	for(int i = 1 ; i <= 100000 ; i++) d[i] = 0;
	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
		d[a[i]]++;
	}
}
bool check(int x , int y){
	if(d[x] > d[y]) {
		return true;
	}
	else
	if(d[x] == d[y]){
		if(x < y) return true; else return false;
	}
	else return false;
}
void res(){
    sort(a , a + n , check);
	for(int i = 0 ; i < n ; i++) cout << a[i] << " ";
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

