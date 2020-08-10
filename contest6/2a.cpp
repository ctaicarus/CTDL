#include<bits/stdc++.h>
using namespace std;
long long n , x , a[100001] , c[100001];
void init(){
	cin >> n >> x;
	for(int i = 0 ; i < n ; i++) {
		cin >> a[i];
		c[i] = i; // vi tri
	}
}
void res(){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(abs(x-a[i]) < abs(x-a[j])) swap(a[i],a[j]);
            if(abs(x-a[i]) == abs(x-a[j])) if(c[i] <= c[j]) swap(a[i] , a[j]);
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		res();
		for(int i = 0 ; i < n ; i++)
		cout << a[i] << " ";
		cout << endl;
	}	
}

