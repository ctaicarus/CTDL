#include<bits/stdc++.h>
using namespace std;
long long n , a[10001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
}
void display(){
	for(int i = 1 ; i <= n ; i++) cout << a[i] << " ";
	cout << endl;
}
void res(){
	int k = 1;
	bool check;
	for(int i = 1 ; i <= n ; i++){
		check = false;
		for(int j = i+1 ; j <= n ; j++){
			if(a[i] > a[j]){
				swap(a[i] , a[j]);
				check = true;
			}
		}
		if(check){
			cout << "Buoc " << k << ": " ;
		    display();
		    k++;
		}
	}
}
int main(){
	int T;
	T = 1;
	while(T--){
	   init();
	   res();
	}
}

