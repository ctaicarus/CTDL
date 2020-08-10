// day con dai nhat co tong chia het cho k
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,k,a[1001],b[1001][51];
int main(){
	int t;
	cin >> t;
	while ( t-- ) {
  		ll x = 0;
  		cin >> n >> k;
  		for(int i = 1 ; i <= n ; i++){ 
			cin >> a[i];
    		a[i] = a[i]%k ;
    		x += a[i];
  		}
  		int l,m = x % k ;
  		if(m == 0)	cout << n;
  		else {
  			for(int i = 0 ; i < k ; i++)	b[0][i] = 100;
  			for(int i = 1 ; i <= n ; i++){
   				for(int j = 0 ; j < k ; j++){
    				if(j != a[i]){
						l = j-a[i];
        				if(l < 0)	l = l+k;
        				if( b[i-1][l] + 1 >= b[i-1][j] )	b[i][j] = b[i-1][j];
        				else 								b[i][j] = b[i-1][l]+1;
        			}
      				else  b[i][j] = 1;
    			}
  			}
  		cout << n-b[n][m] ;
  		}
  		cout << '\n';
  	}
  	return 0;
}
