#include<bits/stdc++.h>
using namespace std;
int n , a[1000001] ;
void init(){
	cin >> n;
	for(int i = 0 ; i < n ; i++) cin >> a[i];
}
void res(){
	for(int i = 0 ; i < n ; i++){
		cout << "Buoc " << i << ": " ;
		sort(a , a + i + 1);
		for(int j = 0 ; j <= i ; j++){
			cout << a[j] << " ";
		}
		cout << endl;
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

