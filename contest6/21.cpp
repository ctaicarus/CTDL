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
void res(){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(d[a[i]] > d[a[j]]) swap(a[i],a[j]);
			if(d[a[i]] == d[a[j]]) if(a[i] < a[j]) swap(a[i],a[j]);
		}
	}
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

