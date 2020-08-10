#include<bits/stdc++.h>
using namespace std;
int n , a[100001] ;
bool c[100001];
void init(){
	cin >> n;
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		c[i] = true;
	}
}
int res(){
	int d = n;
	sort(a + 1 , a + 1 + n);
	for(int i = 1 ; i <= n ; i++){
        if(c[i]){
       	   for(int j = i+1 ; j <= n ; j++){
       		  if(c[j] && a[j] >= 2 * a[i] && a[j] * 2 > a[n]){
       		  	    d--;
       		  	    c[i] = false;
       		  	    c[j] = false;
       		  	    break;
			  }
		   }
	   }
	}
	return d;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		init();
		cout << res() << endl;
	}
}

