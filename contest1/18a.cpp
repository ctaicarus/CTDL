#include<bits/stdc++.h>
using namespace std;
long long n , s ;
bool ok = false;
long long a[40];
bool c[40];
void Try(long long sum , int d){
	if(sum == s){
		ok = true;
	    cout << d << endl; 
		return ;
	}
	for(int i = n ; i >= 1 ; i--){
		if(ok) break;
		if(c[i]){
			c[i] = false;
			Try(sum + a[i] , d + 1);
			c[i] = true;
		}
	}
}
int main(){
    int T;
    cin >> T;
    while(T--){
    	cin >> n >> s;
		ok = false;
	    for(int i = 1 ; i <= n ; i++) {
		   cin >> a[i];
		   c[i] = true;
	    }
	    sort(a + 1 , a + n + 1);
	    Try(0 , 0);
	    if(!ok) cout << -1 << endl;
	}
}

