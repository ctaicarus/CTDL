#include<bits/stdc++.h>
using namespace std;
 
string cv(int n){
	string x = "";
	while(n != 0){
		int c = n % 10;
		char C = c + '0';
		x = C + x;
		n /= 10;
	}
	return x;
} 

void Try(int &n , int a[] , int res[], int &vt){
	if(n == 1) ;
	else {
		for(int i = 1 ; i < n ; i++){
			a[i] = a[i] + a[i+1];
			res[vt] = a[i];
			vt++;
		}
		n--;
		Try(n , a , res , vt);
	}
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n , N;
		cin >> n;
		N = n;
		int res[100] ; // mang ket qua
		res[n] = res[n] + '[';
		int a[n+1];
		int vt = 1; // vi tri
		for(int i = 1 ; i <= n ; i++) {
			cin >> a[i];
			res[vt] = a[i];
			vt++;
		}
	    Try(n , a , res , vt);
	    vt--;
        string s[N+1] ;
        for(int i = 1 ; i <= N ; i++) s[i] = "";
        int x = 1;
        for(int i = 1 ; i <= N ; i++){
        	s[i] = s[i] + '[';
        	for(int j = 1 ; j <= N + 1 - i ; j++){
        		if(j != N + 1 - i ) s[i] = s[i] + cv(res[x]) + ' '; else s[i] = s[i] + cv(res[x]);
        		x++;
			}
			s[i] = s[i] + ']';
		}
		for(int i = N ; i >= 1 ; i--){
			cout << s[i] << " ";
		}
		cout << endl;
	}
}

