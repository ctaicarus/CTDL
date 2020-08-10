#include<bits/stdc++.h>
using namespace std;
int n , s;
int a[1000] ;
void init(){
	cin >> n >> s;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
}
void res(){
	int L[s+1];
	L[s] = 0; L[0] = 1;
	for(int i = 1 ; i < s ; i++) L[i] = 0;
	for (int i = 0 ; i < n ; i++){
		for (int j = s ; j >= a[i] ; j--){
			if (L[j] == 0 && L[j-a[i]] == 1) L[j] = 1;
		}
	}
    if(L[s] == 1) cout <<"YES\n"; else cout <<"NO\n";        
          
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		res();	
	}
}

