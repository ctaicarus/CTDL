#include<bits/stdc++.h>
using namespace std;
int n , a[1000001];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		int d0 = 0 , d1 = 0 , d2 = 0;
		for(int i = 1 ; i <= n ; i++){
			cin >> a[i];
			if(a[i] == 0) d0++ ; 
			if(a[i] == 1) d1++ ;
			if(a[i] == 2) d2++;
		}
		for(int i = 1 ; i <= d0 ; i++) cout << "0" << " ";
		for(int i = 1 ; i <= d1 ; i++) cout << "1" << " ";
		for(int i = 1 ; i <= d2 ; i++) cout << "2" << " ";	
		cout << endl;			
	}
}

