#include<bits/stdc++.h>
using namespace std;
long long n , s , a[31] , b[31] , ans ;
bool ok , stop;
void init(){
	cin >> n >> s;
	ans = n+1;
	ok = false; stop = false;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
}
void res(){
	long long Sum = 0 ;
	long long d = 0;
	for(int i = 1 ; i <= n ; i++){
		if(b[i] == 1) {
			 Sum = Sum + a[i]*b[i];
			 d++;
		}
	}
	if(Sum == s) {
		ans = min(ans , d);
		ok = true;
	}
	 
}
void bcd(){
    int i = n;
    while(i && b[i] != 0){
    	b[i] = 0;
    	i--;
	}
	if(i >= 1) b[i] = 1; else stop = true;
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   while(!stop){
	   	  bcd();
	   	  res();
	   }
	   if(!ok) cout << "-1\n"; else cout << ans << endl;
	}
}

